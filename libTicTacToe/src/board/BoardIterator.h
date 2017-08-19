#ifndef TICTACTOE_BOARD_BOARDITERATOR_H
#define TICTACTOE_BOARD_BOARDITERATOR_H

#include "Board.h"

#include <array>

class BoardIterator
{
public:
  typedef int difference_type;
  typedef Board::Cell value_type;
  typedef Board::Cell* pointer;
  typedef Board::Cell& reference;
  typedef std::input_iterator_tag iterator_category;

  BoardIterator(const std::array<std::array<Board::Cell, 3>, 3>& board);

  void operator++();
  Board::Cell operator*();
  BoardIterator& operator=(BoardIterator& other);
  bool operator==(const BoardIterator& rhs);
  bool operator!=(const BoardIterator& rhs) { return !(*this == rhs); }

  void end();

private:
  const std::array<std::array<Board::Cell, 3>, 3>& _board;

  std::array<std::array<Board::Cell, 3>, 3>::const_iterator _rowIterator;
  std::array<Board::Cell, 3>::const_iterator _columnIterator;
};

#endif //TICTACTOE_BOARD_BOARDITERATOR_H