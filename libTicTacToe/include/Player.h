//
// Created by Tom on 05/08/2017.
//

#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H


class Player {
public:
    Player(int id);
    virtual ~Player();

    void displayPlayer();
    int getId();

private:
    int _id;
};


#endif //TICTACTOE_PLAYER_H
