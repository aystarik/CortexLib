//
// timerobserver.hpp
// Created by Serge on 01.02.2020.
//

#ifndef REGISTERS_TIMEROBSERVER_HPP
#define REGISTERS_TIMEROBSERVER_HPP

template <typename... TObserver>
struct OverflowObservers {
  static void OnOverflow() { (TObserver::OnTimeout(), ...); }
};

template <typename... TObserver>
struct CcTimer1Observers {
  static void OnCaptureCompare() { (TObserver::OnCaptureCompare1(), ...); }
};

template <typename... TObserver>
struct CcTimer2Observers {
  static void OnCaptureCompare() { (TObserver::OnCaptureCompare2(), ...); }
};

template <typename... TObserver>
struct CcTimer3Observers {
  static void OnCaptureCompare() { (TObserver::OnCaptureCompare3(), ...); }
};

template <typename... TObserver>
struct CcTimer4Observers {
  static void OnCaptureCompare() { (TObserver::OnCaptureCompare4(), ...); }
};

#endif  // REGISTERS_TIMEROBSERVER_HPP
