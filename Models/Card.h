/*
 * Card.h
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_CARD_H_
#define MODELS_CARD_H_

namespace Models {

class Card {
public:

	Card();
	Card(Enums::Suits::Suit suit , int num);
	~Card();

	void set(Enums::Suits::Suit suit , int num);
	int getNumber() const ;
	int getSuit() const;
	char getColor();
	void see(bool boolean);
	bool isVisible();
	void allow(bool boolean);
	bool canMove();



private:
	int number;
	bool visible;
	bool movable;
	int suit;


};

} /* namespace Models */

#endif /* MODELS_CARD_H_ */
