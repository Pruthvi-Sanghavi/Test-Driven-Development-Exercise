<<<<<<< HEAD:test/PIDControllerTest.cpp
/*@ 
/@file PIDControllerTest.cpp
/@author Ryan Bates, Pruthvikumar Sanghavi
/@brief This is the test class
/@copyright 2019 Ryan Bates, Pruthvikumar Sanghavi
=======
/*@
 *@file test.cpp
 *@author Aruna Baijal, Ethan Quist
 *@brief This is the test class
 *@copyright 2019 Aruna Baijal, Ethan Quist
>>>>>>> b9c3dea400ed295b60db460f6d647b7290eecfc5:test/test.cpp
*/
#include <gtest/gtest.h>
#include <PIDController.hpp>

// @ This is a very very simple test
TEST(trivialcomputetest, should_pass) {
  PIDController controller(0,0,0,0,0,0);
  EXPECT_DOUBLE_EQ(0,controller.compute(1,0));
}

// @ This is a simple test
TEST(simplecomputetest, should_pass) {
  PIDController controller(1.0,0.0,1.0,2.0,1.5,2.5);
  EXPECT_DOUBLE_EQ(-0.5,controller.compute(1,0));
}

// @ This is a complex test
TEST(computetest, should_pass) {
  PIDController controller(1.0,1.0,1.0,2.0,1.5,2.5);
  EXPECT_DOUBLE_EQ(2.0,controller.compute(1,0));
}
