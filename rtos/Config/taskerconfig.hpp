// Filename: taskerconfig.hpp
// Created by by Sergey Kolody  on 04.06.2020.

#pragma once
#include "idletask.hpp"    // for idleTask
#include "tasker.hpp"      // for Tasker
#include "teststates.hpp"  // for targetThread, myThread1, myThread2,

class myTasker : public Tasker<targetThread, myThread1, myThread2, idleTask> {};
