#include "BoardIterator.h"


BoardIterator::BoardIterator(const std::array<std::array<Board::Cell, 3>, 3>& board)
  : _board(board)
  , _rowIterator(_board.begin())
  , _columnIterator(_rowIterator->begin())
{
}

void BoardIterator::operator++()
{
  if (++_columnIterator == _rowIterator->end())
  {
    if (++_rowIterator != _board.end())
    {
      _columnIterator = _rowIterator->begin();
    }
  }
}

void BoardIterator::end()
{
  _rowIterator = _board.end();
  _columnIterator = _board.back().end();
}

Board::Cell BoardIterator::operator*()
{
  return *_columnIterator;
}

BoardIterator& BoardIterator::operator=(BoardIterator& other)
{
  _rowIterator = other._rowIterator;
  _columnIterator = other._columnIterator;

  return *this;
}

bool BoardIterator::operator==(const BoardIterator& rhs)
{
  return _rowIterator == rhs._rowIterator && _columnIterator == rhs._columnIterator;
}