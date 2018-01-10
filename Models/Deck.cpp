/*
 * Deck.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Deck.h"

namespace Models {

Deck::Deck(){
}
void Deck::init(int maxNum): MAX_NUM_CARDS(maxNum) {
        Card* aux = new Card();
		for( int a = 1; a <= MAX_NUM_CARDS; a++ ) {
					aux->set(Enums::Suits::Suit::HEART, a+1);
					queue->setCardBack(aux);
		        	aux->set(Enums::Suits::Suit::DIAMOND, a+1);
		        	queue->setCardBack(aux);
		        	aux->set(Enums::Suits::Suit::CLUB, a+1);
		        	queue->setCardBack(aux);
		        	aux->set(Enums::Suits::Suit::SPADE, a+1);
		        	queue->setCardBack(aux);
		    	   }
		queue->shuffle();
	}

void Deck::shuffle() {
		queue->shuffle();
	}
Card* Deck::getCard() {
	return queue->getCardBack();
	}

Queue* Deck::getCards() {
	Queue* cards;
	for(int i=0; i<NUM_TO_DRAW ; i++){
		cards->setCardFront(queue->getCardBack());
	   }
	return cards;
	}

int Deck::getSize() const {
		return queue->getSize();
	}

bool Deck::isEmpty() {
		return queue->isEmpty();
	}
bool Deck::fullfill(Queue* value ){
	if (queue->isEmpty()){
		queue = value;
		return true;
	}else {
		return false;
	}

	}

} /* namespace Models */
