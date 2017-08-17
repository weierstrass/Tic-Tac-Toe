/*!
 *  \file playerUnitTest.cpp
 *  \brief The unit tests for the player class.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 05 August 2017
 */

#include "gtest/gtest.h"
#include "Player.h"

TEST(PlayUnitTest, getIDPlayer) {
  Player p1(1);
  Player p2(2);

  EXPECT_EQ (1, p1.getId());
  EXPECT_EQ (3, p2.getId());
}