#pragma once
/**
 *  @file    AnalogSensor.hpp
 *  @author  Ravi Bhadeshiya
 *  @version 1.0
 *  @copyright GNU Public License
 *
 */
#include <iostream>
/**
 * @brief      Class for analog sensor.
 */
class AnalogSensor {
 public:
    /**
     * @brief      Construct the object
     *
     * @param[in]  samples  The samples
     */
    explicit AnalogSensor(unsigned int samples);
    /**
     * @brief      Destroys the object.
     */
    ~AnalogSensor();
    /**
     * @brief      Reading the function
     *
     * @return     return int
     */
    int Read();
 private:
    unsigned int mSamples;  ///< mSamples as int
};
