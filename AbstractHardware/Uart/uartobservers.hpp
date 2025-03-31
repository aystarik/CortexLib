//
// Created by Serge on 10.02.2020.
//

#ifndef REGISTERS_UARTOBSERVERS_HPP
#define REGISTERS_UARTOBSERVERS_HPP

template <typename... TObserver>
struct UartTransmitObservers {
  static void OnTxDataRegEmpty() { (TObserver::OnTransmit(), ...); }
};

template <typename... TObserver>
struct UartTransmitCompleteObservers {
  static void OnComplete() { (TObserver::OnTransmitComplete(), ...); }
};

template <typename... TObserver>
struct UartReceiveObservers {
  static void OnRxData() { (TObserver::OnReceive(), ...); }
};
#endif  // REGISTERS_UARTOBSERVERS_HPP
