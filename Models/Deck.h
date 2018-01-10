/*
 * Deck.h
 *
 *  Created on: 7 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_DECK_DECK_H_
#define MODELS_DECK_DECK_H_



#include "Enums.h"
#include "Card.h"
#include "Queue.h"

namespace Models {

class Deck {

private:
	int MAX_NUM_CARDS;
	int NUM_TO_DRAW = 3;
	Queue* queue;


public:

	Deck();
	void init(int maxNum);
	void shuffle();
	Card* getCard();
	Queue* getCards();
	int getSize() const;
	bool isEmpty();
	bool fullfill(Queue* queue);
};

}
#endif
