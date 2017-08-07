/*!
 *  \file boardUnitTest.cpp
 *  \brief The sources for the unit tests for the board class.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 06 August 2017
 */

#include "../include/boardUnitTest.h"

using namespace testing;

void BoardUnitTest::TearDown() {
  resetBoard();
}

TEST_F(BoardUnitTest, getValueFromBoardTest) {
  setValueAt(0,0,'o');
  setValueAt(1,1,'x');

  EXPECT_EQ('o', getValueAt(0,0));
  EXPECT_EQ('x', getValueAt(1,1));
}

TEST_F(BoardUnitTest, checkRowTest) {
  setValueAt(0,0,'x');
  setValueAt(0,1,'x');
  setValueAt(0,2,'x');

  EXPECT_EQ(true, checkRow());

  setValueAt(0,0,'f');
  setValueAt(0,1,'f');
  setValueAt(0,2,'x');
  EXPECT_EQ(false, checkRow());
}

TEST_F(BoardUnitTest, checkColumnTest) {
  setValueAt(0,0,'x');
  setValueAt(1,0,'x');
  setValueAt(2,0,'x');

  EXPECT_EQ(true, checkColumn());

  setValueAt(0,0,'f');
  setValueAt(1,0,'f');
  setValueAt(2,0,'x');
  EXPECT_EQ(false, checkColumn());
}

TEST_F(BoardUnitTest, checkDiagonalTest) {
  setValueAt(0,0,'x');
  setValueAt(1,1,'x');
  setValueAt(2,2,'x');

  EXPECT_EQ(true, checkDiagonal());

  setValueAt(0,0,'f');
  setValueAt(1,1,'f');
  setValueAt(2,2,'x');
  EXPECT_EQ(false, checkColumn());
}

TEST_F(BoardUnitTest, checkCompleteTest) {
  // Complete by row.
  setValueAt(0,0,'x');
  setValueAt(0,1,'x');
  setValueAt(0,2,'x');

  EXPECT_EQ(true, complete());


  // Complete by column.
  resetBoard();

  setValueAt(0,0,'x');
  setValueAt(1,0,'x');
  setValueAt(2,0,'x');

  EXPECT_EQ(true, complete());


  // Complete by diagonal.
  resetBoard();

  setValueAt(0,0,'x');
  setValueAt(1,1,'x');
  setValueAt(2,2,'x');

  EXPECT_EQ(true, complete());


  // Not full.
  resetBoard();

  setValueAt(0,0,'a');

  EXPECT_EQ(false, complete());


  // Complete because it is full.
  setValueAt(0,1,'z');
  setValueAt(0,2,'e');
  setValueAt(1,0,'r');
  setValueAt(1,1,'t');
  setValueAt(1,2,'y');
  setValueAt(2,0,'u');
  setValueAt(2,1,'i');
  setValueAt(2,2,'o');

  EXPECT_EQ(true, complete());
}
