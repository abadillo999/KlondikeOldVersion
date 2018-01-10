/*
 * Game.h
 *
 *  Created on: 13 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_GAME_H_
#define MODELS_GAME_H_
#include "Enums.h"
#include "Board.h"
#include "Deck.h"
#include "Foundation.h"
#include "Pile.h"
#include "Waste.h"

namespace Models {

class Game {
public:
	Game();
	virtual ~Game();
	void init();
	void deleteCurrentGame();

	void setNewState(Enums::States::State NewState);
	bool checkKlondike() const;
	Enums::States::State getState() const;
	void moveCard(int origin, int destination);
	Stack* getStack(int position);

private:
	Enums::States::State state = Enums::States::START;
	int MAX_NUM_CARDS = 13;
	Board* board;
	Deck* deck;
};

} /* namespace Models */

#endif /* MODELS_GAME_H_ */
