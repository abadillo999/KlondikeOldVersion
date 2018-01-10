/*
 * Card.cpp
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Card.h"

namespace Models {


	Card::Card() {
		this->visible = true;
		this->movable = true;
		this->suit = Enums::Suits::Suit::UNDEFINED;
		this->number = -1;
	}

	Card::Card(Enums::Suits::Suit suit , int num){
	    this->suit = suit;
	    this->number = num;
	    this->visible = true;
		this->movable = true;
	}


	void Card::set(Enums::Suits::Suit suit , int num){
		    this->suit = suit;
		    this->number = num;
		}

	int Card::getNumber() const {
		return this->number;
	}

	char Card::getColor() {

			 if ((this->suit == Enums::Suits::SPADE) || (this->suit == Enums::Suits::CLUB))
				 return "b";
			 return "r";
	}

	int Card::getSuit() const {
		return this->suit;
	}

	void Card::see(bool boolean) {
		this->visible = boolean;
	}

	bool Card::isVisible() {
			return this->visible;
	}

	void Card::allow(bool boolean) {
		this->movable = boolean;
	}

	bool Card::canMove() {
		return this->movable;
	}






} /* namespace Models */
