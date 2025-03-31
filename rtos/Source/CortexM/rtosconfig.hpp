#pragma once

#include "scbregisters.hpp"  // for SCB

inline constexpr bool CORTEXM = true;

inline static void IsrExitProceed() { SCB::ICSR::PENDSVSET::PendingState::Set(); }
