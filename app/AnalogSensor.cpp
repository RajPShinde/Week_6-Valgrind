/** 
 *  @file  AnalogSensor.cpp
 *  @author  Raj Shinde
 *  @copyright  Raj Shinde
 *  @copyright  2019
 *  @version  1.0
 *  @brief  Exploring the valgrind tool to 
 *  improve code quality during 
 *  development and testing.
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

/**
 *  @brief  Created a Constructor
 *  @param  int samples
 */
AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

/**
 *  @brief  Default Destructor
 */
AnalogSensor::~AnalogSensor() {
}

/**
 *  @brief  Analog Sensor read function
 *  @param  None
 *  @return result
 */
int AnalogSensor::Read() {
    std::shared_ptr<std::vector<int>> readings
= std::make_shared<std::vector<int>>
(mSamples, 10);
    double result = std::accumulate(readings->begin()
, readings->end(), 0.0) / readings->size();
    return result;
}


