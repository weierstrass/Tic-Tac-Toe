/*!
 *  \file boardUnitTest.cpp
 *  \brief The sources for the unit tests for the board class.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 06 August 2017
 */

#include "Board.h"

#include <gtest/gtest.h>

using namespace testing;

TEST(BoardUnitTest, getValueFromBoardTest)
{
  Board board;

  board.setValueAt(0,0,Board::Cell::circle);
  board.setValueAt(1,1,Board::Cell::cross);

  EXPECT_EQ(Board::Cell::circle, board.getValueAt(0,0));
  EXPECT_EQ(Board::Cell::cross, board.getValueAt(1,1));
}

TEST(BoardUnitTest, checkRowTest)
{
  Board board;

  board.setValueAt(0,0,Board::Cell::cross);
  board.setValueAt(0,1,Board::Cell::cross);
  board.setValueAt(0,2,Board::Cell::cross);

  EXPECT_EQ(true, board.checkRow());

  board.setValueAt(0,0,Board::Cell::circle);
  board.setValueAt(0,1,Board::Cell::circle);
  board.setValueAt(0,2,Board::Cell::cross);
  EXPECT_EQ(false, board.checkRow());
}

TEST(BoardUnitTest, checkColumnTest)
{
  Board board;

  board.setValueAt(0,0,Board::Cell::cross);
  board.setValueAt(1,0,Board::Cell::cross);
  board.setValueAt(2,0,Board::Cell::cross);

  EXPECT_EQ(true, board.checkColumn());

  board.setValueAt(0,0,Board::Cell::circle);
  board.setValueAt(1,0,Board::Cell::circle);
  board.setValueAt(2,0,Board::Cell::cross);
  EXPECT_EQ(false, board.checkColumn());
}

TEST(BoardUnitTest, checkDiagonalTest)
{
  Board board;

  board.setValueAt(0,0,Board::Cell::cross);
  board.setValueAt(1,1,Board::Cell::cross);
  board.setValueAt(2,2,Board::Cell::cross);

  EXPECT_EQ(true, board.checkDiagonal());

  board.setValueAt(0,0,Board::Cell::circle);
  board.setValueAt(1,1,Board::Cell::circle);
  board.setValueAt(2,2,Board::Cell::cross);
  EXPECT_EQ(false, board.checkColumn());
}

TEST(BoardUnitTest, checkCompleteTest)
{
  Board board;

  // Complete by row.
  board.setValueAt(0,0,Board::Cell::cross);
  board.setValueAt(0,1,Board::Cell::cross);
  board.setValueAt(0,2,Board::Cell::cross);

  EXPECT_EQ(true, board.complete());


  // Complete by column.
  board = Board();

  board.setValueAt(0,0,Board::Cell::cross);
  board.setValueAt(1,0,Board::Cell::cross);
  board.setValueAt(2,0,Board::Cell::cross);

  EXPECT_EQ(true, board.complete());


  // Complete by diagonal.
  board = Board();

  board.setValueAt(0,0,Board::Cell::cross);
  board.setValueAt(1,1,Board::Cell::cross);
  board.setValueAt(2,2,Board::Cell::cross);

  EXPECT_EQ(true, board.complete());


  // Not full.
  board = Board();

  board.setValueAt(0,0,Board::Cell::cross);

  EXPECT_EQ(false, board.complete());


  // Complete because it is full.
  board.setValueAt(0,1, Board::Cell::cross);
  board.setValueAt(0,2, Board::Cell::cross);
  board.setValueAt(1,0, Board::Cell::cross);
  board.setValueAt(1,1, Board::Cell::cross);
  board.setValueAt(1,2, Board::Cell::cross);
  board.setValueAt(2,0, Board::Cell::cross);
  board.setValueAt(2,1,Board::Cell::cross);
  board.setValueAt(2,2,Board::Cell::circle);

  EXPECT_EQ(true, board.complete());
}
