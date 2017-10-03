/**
 *  @file    AnalogSensor.cpp
 *  @author  Ravi Bhadeshiya
 *  @version 1.0
 *  @copyright GNU Public License
 *
 */
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>
// Construct the object
AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}
// Destroy the object
AnalogSensor::~AnalogSensor() {
}
// read the sensor data
int AnalogSensor::Read() {
    auto readings = std::make_unique<std::vector<int>>(mSamples, 10);
    double result = std::accumulate(readings->begin(), \
        readings->end(), 0.0) / readings->size();
    return result;
}
