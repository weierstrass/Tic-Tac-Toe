/*!
 *  \file gameUnitTest.cpp
 *  \brief The unit tests for the game class.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 06 August 2017
 */

#include "gtest/gtest.h"
#include "Game.h"

TEST(GameUnitTest, getIDPlayer)
{
  Game game(2);

  EXPECT_EQ (1, game.getCurrentPlayer());
}