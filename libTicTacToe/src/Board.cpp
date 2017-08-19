/*!
 *  \file Board.cpp
 *  \brief The Tic Tac Toe board.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 06 August 2017
 */

#include "Board.h"

Board::Board() : _nbPassage(0)
{
  std::fill((Cell*)_board, (Cell*)_board + sizeof(_board) / sizeof(Cell), Cell::empty);
}

Board::~Board()
{

}

bool Board::checkRow() const
{
  for (auto i=0; i<3; i++)
  {
    int cptForRow = 0;
    for (auto j=0; j<3; j++)
    {
      if ((j > 0) && (_board[i][j] != Cell::empty) && (_board[i][j] == _board[i][j-1]))
      {
        ++cptForRow;
      }
      if (cptForRow == 2)
        return true;
    }
  }
  return false;
}

bool Board::checkColumn() const
{
  for (auto i=0; i<3; i++)
  {
    int cptForColumn = 0;
    for (auto j=0; j<3; j++)
    {
      if ((j > 0) && (_board[j][i] != Cell::empty) && (_board[j][i] == _board[j-1][i]))
      {
        ++cptForColumn;
      }
      if (cptForColumn == 2)
        return true;
    }
  }
  return false;
}

bool Board::checkDiagonal() const
{
  if ((_board[1][1] != Cell::empty) &&
     ((_board[0][0] == _board[1][1] &&
       _board[1][1] == _board[2][2])
      ||
      (_board[0][2] == _board[1][1]
       && _board[1][1] == _board[2][0])))
    return true;
  return false;
}

bool Board::complete() const
{
  if (_nbPassage == 9)
    return true;
  else if (checkRow())
    return true;
  else if (checkColumn())
    return true;
  else if (checkDiagonal())
    return true;

  return false;
}
void Board::setValueAt(const int row, const int column, const Cell value)
{
  _board[row][column] = value;
  ++_nbPassage;
}

Board::Cell Board::getValueAt(const int row, const int column) const
{
  return _board[row][column];
}

void Board::resetBoard()
{
  std::fill((Cell*)_board, (Cell*)_board + sizeof(_board) / sizeof(Cell), Cell::empty);
  _nbPassage = 0;
}


std::istream& operator>>(std::istream& is, Board::Cell& cell)
{
  char input = '\0';
  is >> input;
  if (input == ' ')
  {
    cell = Board::Cell::empty;
  }
  else if (input == 'x')
  {
    cell = Board::Cell::cross;
  }
  else if (input == 'o')
  {
    cell = Board::Cell::circle;
  }
  else
  {
    assert(!"Character cannot be converted to Cell.");
  }
  return is;
}