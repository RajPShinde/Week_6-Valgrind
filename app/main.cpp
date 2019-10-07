/** 
 *  @file  main.cpp
 *  @author  Raj Shinde
 *  @copyright  Raj Shinde
 *  @copyright  2019
 *  @version  1.0
 *  @brief  Exploring the valgrind tool to 
 *  improve code quality during 
 *  development and testing.
 */

#include <iostream>
#include <AnalogSensor.hpp>

/**
 *  @brief  Main Function
 *  @param  None
 *  @return 0
 */
int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if ( terminator ) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
