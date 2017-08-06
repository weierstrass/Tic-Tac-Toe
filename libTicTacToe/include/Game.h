/*!
 *  \file Game.h
 *  \brief The Tic Tac Toe game.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 06 August 2017
 */

#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H

#include <vector>

class Player;

/*!
 *  \class Game
 *	\brief Object game.
 *
 *  The game contains the players, the rules and the display.
 */
class Game {
public:

    /*!
     *	\fn explicit Game(std::size_t size)
     *	\brief Game's Constructor, it will allocate the vector of players' size.
     *	\param size The number of players.
     */
    explicit Game(std::size_t size);

    /*!
     *	\fn virtual ~Game()
     *	\brief Destructor.
     */
    virtual ~Game();

    /*!
     *	\fn virtual voir start()
     *	\brief The start method of the game.
     */
    virtual void start();

    /*!
     *	\fn int getCurrentPlayer()
     *	\brief Retrieve the current player's ID.
     *	\return The ID of the current player.
     */
    int getCurrentPlayer();

private:
    std::vector<Player> _players;  /*!< vector of players, the losers will be kicked out the vector. */
    int _currentPlayer;             /*!< ID of the current player. */

};


#endif //TICTACTOE_GAME_H
