/*!
 *  \file boardUnitTest.h
 *  \brief The header for the unit tests for the board class.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 06 August 2017
 */

#ifndef TICTACTOE_BOARDUNITTEST_H
#define TICTACTOE_BOARDUNITTEST_H

#include "Board.h"

/*!
 *  \class BoardUnitTest
 *	\brief Object board unit test.
 *
 *  This class is there to test the board.
 */
class BoardUnitTest : public ::testing::Test
{
  Board _board;
public:
  /*!
   *	\fn virtual void TearDown()
   *	\brief Will be executed after each test to reset the board.
   */
  virtual void TearDown();
};


#endif //TICTACTOE_BOARDUNITTEST_H
