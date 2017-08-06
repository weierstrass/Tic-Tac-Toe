/*!
 *  \file Game.cpp
 *  \brief The Tic Tac Toe game.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 06 August 2017
 */

#include "Game.h"
#include "Player.h"

Game::Game(std::size_t size) : _players(size, Player(1)), _currentPlayer(0) {
  _players[1] = Player(2);
}

Game::~Game() {
}

void Game::start() {
}

int Game::getCurrentPlayer() {
  return _players[_currentPlayer].getId();
}