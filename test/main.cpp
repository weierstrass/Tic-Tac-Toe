/*!
 *  \file main.cpp
 *  \brief The main for the tests.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 05 August 2017
 */

#include "gtest/gtest.h"

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}
