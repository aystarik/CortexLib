//
// Created by Sergey on 20.10.2019.
//

#ifndef REGISTERS_CRITICALSECTIONCONFIG_HPP
#define REGISTERS_CRITICALSECTIONCONFIG_HPP

#include "criticalsectiondefault.hpp"  //for CriticalSectionDefault
#include "criticalsectionguard.hpp"    //for CriticalSectionGuard

using CriticalSection = CriticalSectionGuard<CriticalSectionDefault>;
#endif  // REGISTERS_CRITICALSECTIONDEFAULTCONFIG_HPP
