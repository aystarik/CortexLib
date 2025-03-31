//
// Created by Serge on 19.01.2020.
//

#ifndef REGISTERS_HARDWARETIMEROVERFLOW_HPP
#define REGISTERS_HARDWARETIMEROVERFLOW_HPP

#include <cstdint>  // for std::uint32_t

template <typename TimerModule, typename TimerObserver>
struct HardwareOverflowTimer {
  static void HandleInterrupt() {
    if (TimerModule::Timer::SR::UIF::InterruptPending::IsSet()) {
      TimerModule::Timer::SR::UIF::NoInterruptPending::Set();
      TimerObserver::OnOverflow();
    }
  }

  static void SetDevider(std::uint32_t Devider) { TimerModule::SetDevider(Devider); }

  static void SetDelay(std::uint32_t delay) { TimerModule::SetDelay(delay); }

  static void Start() { TimerModule::Start(); }

  static void Stop() {
    TimerModule::Stop();
    TimerModule::DisableInterrupt();
  }

  static void Execute() {
    TimerModule::Start();
    while (!TimerModule::IsOverflow()) {
    }
    TimerModule::Timer::SR::UIF::NoInterruptPending::Set();
    TimerObserver::OnOverflow();
    TimerModule::Restart();
  }

  static void Restart() {
    TimerModule::Restart();
    TimerModule::Start();
    TimerModule::EnableInterrupt();
  }
};

#endif  // REGISTERS_HARDWARETIMEROVERFLOW_HPP
