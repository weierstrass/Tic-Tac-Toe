/*!
 *  \file Player.h
 *  \brief The Player.
 *  \author Tomas Gomes Cardoso
 *  \version 1.0
 *  \date 05 August 2017
 */

#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H

/*!
 *  \class Player
 *	\brief Object player.
 *
 *  The player is there to knows who's playing.
 */
class Player {
public:

    /*!
     *	\fn Player(int id)
     *	\brief Constructor.
     *	\param id The id of the player.
     */
    Player(int id);

    /*!
     *	\fn virtual ~Player()
     *	\brief Destructor.
     */
    virtual ~Player();

    /*!
     *	\fn void displayPlayer()
     *	\brief Method to display the Player's info.
     */
    void displayPlayer();

    /*!
     *	\fn int getId()
     *	\brief Return the ID of the player.
     *	\return The ID of the player.
     */
    int getId();

private:
    int _id; /*!< The ID of the player. */
};


#endif //TICTACTOE_PLAYER_H
