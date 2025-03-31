//
// Created by Sergey on 20.10.2019.
//

#ifndef REGISTERS_CRITICALSECTIONDEFAULT_HPP
#define REGISTERS_CRITICALSECTIONDEFAULT_HPP

// #include "intrinsics.h" // for __disable_interrupt()

struct CriticalSectionDefault {
  static void Lock() {
    // __disable_interrupt() ;
  }

  static void UnLock() {
    //__enabled_interrupt() ;
  }
};

#endif  // REGISTERS_CRITICALSECTIONDEFAULT_HPP
