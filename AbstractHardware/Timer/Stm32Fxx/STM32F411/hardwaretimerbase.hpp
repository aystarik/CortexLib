//
// Created by SKolody on 17.10.2019.
//

#ifndef REGISTERS_HARDWARETIMERBASE_HPP
#define REGISTERS_HARDWARETIMERBASE_HPP

#include <cstdint>
#include <type_traits>

struct TimerSwitchable {};

struct TimerCountable : TimerSwitchable {};

struct TimerCcpable : TimerSwitchable {};

struct TimerInterruptable {};

struct TimerCountableInterruptable : TimerInterruptable, TimerCountable {};

struct TimerCcpableInterruptable : TimerInterruptable, TimerCcpable {};

template <typename TimerModule, typename Interface, typename TimerList>
struct HardwareTimerBase {
  using CntType = typename TimerModule::CNT::Type;
  using Timer = TimerModule;
  using TInterface = Interface;

  static void SetDevider(std::uint32_t Devider) { TimerModule::PSC::Write(Devider); }

  template <typename T = Interface, class = typename std::enable_if_t<std::is_base_of<TimerSwitchable, T>::value>>
  static void Start() {
    TimerModule::CR1::CEN::Enable::Set();
  }

  template <typename T = Interface, class = typename std::enable_if_t<std::is_base_of<TimerSwitchable, T>::value>>
  static void Restart() {
    TimerModule::CNT::Write(CntType(0));
  }

  template <typename T = Interface, class = typename std::enable_if_t<std::is_base_of<TimerSwitchable, T>::value>>
  static void Stop() {
    TimerModule::CR1::CEN::Disable::Set();
  }

  template <typename T = Interface, class = typename std::enable_if_t<std::is_base_of<TimerCountable, T>::value>>
  static void SetDelay(std::uint32_t delay) {
    TimerModule::ARR::Write(delay);
  }

  template <typename T = Interface, class = typename std::enable_if_t<std::is_base_of<TimerCountable, T>::value>>
  static bool IsOverflow() {
    return TimerModule::SR::UIF::InterruptPending::IsSet();
  }

  template <typename T = Interface, class = typename std::enable_if_t<std::is_base_of<TimerInterruptable, T>::value>>
  static void HandleInterrupt() {
    TimerModule::OnInterrupt();
  }

  template <typename T = Interface, class = typename std::enable_if_t<std::is_base_of<TimerInterruptable, T>::value>>
  static void EnableInterrupt() {
    TimerModule::DIER::UIE::Enable::Set();
  }

  template <typename T = Interface, class = typename std::enable_if_t<std::is_base_of<TimerInterruptable, T>::value>>
  static void DisableInterrupt() {
    TimerModule::DIER::UIE::Disable::Set();
  }
};

#endif  // REGISTERS_HARDWARETIMERBASE_HPP
