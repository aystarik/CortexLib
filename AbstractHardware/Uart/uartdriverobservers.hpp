//
// Created by Serge on 16.02.2020.
//

#ifndef REGISTERS_UARTDRIVEROBSERVERS_HPP
#define REGISTERS_UARTDRIVEROBSERVERS_HPP

#include "uartdriverconfig.hpp"

template <typename... Observers>
struct UartDriverTransmitCompleteObservers {
  static void OnWriteComplete() { (Observers::OnTransmitComplete(), ...); }
};

template <typename... Observers>
struct UartDriverReceiveCompleteObservers {
  static void OnReadComplete(tBuffer& buffer, std::size_t bytesReceived) { (Observers::OnReceiveComplete(buffer, bytesReceived), ...); }
};
#endif  // REGISTERS_UARTDRIVEROBSERVERS_HPP
