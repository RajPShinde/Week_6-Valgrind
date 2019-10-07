/** 
 *  @file  AnalogSensor.hpp
 *  @author  Raj Shinde
 *  @copyright  Raj Shinde
 *  @copyright  2019
 *  @version  1.0
 *  @brief  Exploring the valgrind tool to 
 *  improve code quality during 
 *  development and testing.
 */

#pragma once

#include <iostream>

/**
 *  @brief  Class containing methods related 
 *  to sensor
 */
class AnalogSensor {
 public:
    explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};
