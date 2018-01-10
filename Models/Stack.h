/*
 * Stacks.h
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_STACK_H_
#define MODELS_STACK_H_

namespace Models {

class Stack{
public:
	Stack();
	virtual ~Stack();
	bool canPushCard(Card* card);
	bool canTakeCard();
	std::list<Card *> getVisibleCards();
};

} /* namespace Models */

#endif /* MODELS_STACK_H_ */
