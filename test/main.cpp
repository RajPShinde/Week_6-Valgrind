/** 
 *  @file  main.cpp
 *  @author  Raj Shinde
 *  @copyright  Raj Shinde
 *  @copyright  2019
 *  @version  1.0
 *  @brief  Calling test procedure
 */

#include <gtest/gtest.h>

/**
 *  @brief  Main Function for running tests
 *  @param  int, int
 *  @return run
 */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
