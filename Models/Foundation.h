/*
 * Foundation.h
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_FOUNDATION_H_
#define MODELS_FOUNDATION_H_
#import "Queue.h"
#import "Stack.h"

namespace Models {

class Foundation: public Stack {
private:
	int MAX_NUM_CARDS;
	Queue* queue;
public:
	Foundation(int maxNum);
	bool canPushCard(Card* card);
	void setCardFront(Card* card);
	Card* show();
	bool isFull();
	bool canTakeCard();
	std::list<Card *> getVisibleCards();

};

} /* namespace Models */

#endif /* MODELS_FOUNDATION_H_ */
