//
// Created by Serge on 19.01.2020.
//

#ifndef REGISTERS_INTERRUPTSLIST_HPP
#define REGISTERS_INTERRUPTSLIST_HPP

template <typename... Modules>
struct InterruptsList {
  static void OnInterrupt() { (Modules::HandleInterrupt(), ...); }
};
#endif  // REGISTERS_INTERRUPTSLIST_HPP
