// Filename: smbus".hpp"
// Created by Serge on 12.03.2020.
//
#ifndef REGISTERS_SMBUS_HPP
#define REGISTERS_SMBUS_HPP

#include <chrono>  // for us

template <typename Timer, typename SdaPin, typename SclPin>
struct SmBus {
  enum class ReturnCode { Ok = 0, SlaveAck1Fail, SlaveAck2Fail, SlaveAck3Fail };

  static void Start() {
    using namespace std::chrono_literals;  // for us
    SdaPin::Set();
    SclPin::Set();
    Timer::Delay(5us);
    SdaPin::Reset();
    Timer::Delay(5us);
    SclPin::Reset();
    Timer::Delay(5us);
  }

  static void Stop() {
    using namespace std::chrono_literals;  // for us
    Timer::Delay(5us);
    SdaPin::Reset();
    Timer::Delay(5us);
    SclPin::Set();
    Timer::Delay(5us);
    SdaPin::Set();
    Timer::Delay(5us);
  }
  static void WriteByte(std::uint8_t data) {
    using namespace std::chrono_literals;  // for us
    std::uint8_t temp = 0x80U;
    for (std::size_t i = 0; i < 8U; ++i) {
      SclPin::Reset();
      Timer::Delay(6us);
      ((data & temp) == 0U) ? SdaPin::Reset() : SdaPin::Set();
      temp >>= 1U;
      Timer::Delay(6us);
      SclPin::Set();
      Timer::Delay(6us);
    }
    AckSlaveToMaster();
  }

  static std::uint8_t ReadByte() {
    using namespace std::chrono_literals;  // for us
    std::uint8_t data;
    std::uint8_t temp = 0x80;

    for (std::size_t i = 0U; i < 8; ++i) {
      SclPin::Reset();
      //		SdaPin::SetInput() ;
      Timer::Delay(6us);
      SdaPin::IsSet() ? (data |= temp) : (data &= ~temp);
      temp >>= 1U;
      SclPin::Set();
      Timer::Delay(6us);
    }
    //	SdaPin::SetOutput() ;
    AckMasterToSlave();
    return data;
  }

 private:
  static void AckMasterToSlave() {
    using namespace std::chrono_literals;  // for us
    SclPin::Reset();
    SdaPin::Reset();
    Timer::Delay(6us);
    SclPin::Set();
    Timer::Delay(6us);
    SclPin::Reset();
    Timer::Delay(6us);
    SdaPin::Set();  // Master must release the SDA after Ack !!!
    Timer::Delay(6us);
  }

  static ReturnCode AckSlaveToMaster() {
    using namespace std::chrono_literals;  // for us
    SclPin::Reset();
    Timer::Delay(6us);
    SdaPin::Set();
    //	SdaPin::SetInput() ;
    Timer::Delay(6us);
    if (!SdaPin::IsSet()) {
      SclPin::Set();
      Timer::Delay(6us);
      if (!SdaPin::IsSet()) {
        SclPin::Reset();
        Timer::Delay(6us);
        if (SdaPin::IsSet()) {
          //	SdaPin::SetOutput() ;
          return ReturnCode::Ok;  // Slave Ack
        }
        // SdaPin::SetOutput() ;
        return ReturnCode::SlaveAck1Fail;
      }
      //	SdaPin::SetOutput() ;
      return ReturnCode::SlaveAck2Fail;
    }
    // SdaPin::SetOutput() ;
    return ReturnCode::SlaveAck3Fail;
  }
};

#endif  // REGISTERS_SMBUS_HPP
