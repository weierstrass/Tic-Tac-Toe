/*!
 *  \file Player.h
 *  \brief The Player.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 05 August 2017
 */

#include "../include/Player.h"
#include <iostream>

Player::Player(int id) : _id(id) {
}

Player::~Player() {}

int Player::getId() {
    return _id;
}

void Player::displayPlayer() {
    std::cout << "Player n°" << _id << std::endl;
}