/*!
 *  \file Board.h
 *  \brief The Tic Tac Toe board.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 06 August 2017
 */

#ifndef TICTACTOE_BOARD_H
#define TICTACTOE_BOARD_H

#include "iostream"

/*!
 *  \class Board
 *	\brief Object board.
 *
 *  The board of the Tic Tac Toe game (a table 3*3).
 */
class Board {
public:

  /*!
   *	\fn Board()
   *	\brief Constructor, it will initialize the attributes.
   */
  Board();

  /*!
   *	\fn virtual ~Board()
   *	\brief Destructor.
   */
  virtual ~Board();

  /*!
   *	\fn bool complete() const
   *	\brief Verify if there is any condition up there true or if the table is full.
   *	\return True if it is, false elsewhere.
   */
  bool complete() const;

  /*!
   *	\fn void askValue()
   *	\brief Ask to the current player a value and the position to put it in the board.
   */
  void askValue();

  /*!
   *	\fn void resetBoard()
   *	\brief Reset the board.
   */
  void resetBoard();

protected:

  /*!
   *	\fn void setValueAt(const int row, const int column, const char value)
   *	\brief Set a value in the board at a given place.
   *	\param row The row where we want to put the value.
   *	\param column The column where we want to put the value.
   *	\param value The value itself.
   */
  void setValueAt(const int row, const int column, const char value);

  /*!
   *	\fn char getValueAt(const int row, const int column) const
   *	\brief Get the value from the given place of the board.
   *	\param row The row where we want to put the value.
   *	\param column The column where we want to put the value.
   *	\return The value wanted.
   */
  char getValueAt(const int row, const int column) const;

  /*!
   *	\fn bool checkRow() const
   *	\brief Verify if there is a row with only the same char.
   *	\return True if it is, false elsewhere.
   */
  bool checkRow() const;

  /*!
   *	\fn bool checkColumn() const
   *	\brief Verify if there is a column with only the same char.
   *	\return True if it is, false elsewhere.
   */
  bool checkColumn() const;

  /*!
   *	\fn bool checkDiagonal() const
   *	\brief Verify if there is a diagonal with only the same char.
   *	\return True if it is, false elsewhere.
   */
  bool checkDiagonal() const;

private:
  char _board[3][3];    /*!< The board for Tic Tac Toe game, a 3*3 table. */
  int _nbPassage;       /*!< The number of value set in the board. */
};


#endif //TICTACTOE_BOARD_H
