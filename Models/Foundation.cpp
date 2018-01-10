/*
 * Foundation.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Foundation.h"

namespace Models {

Foundation::Foundation(int maxNum) :MAX_NUM_CARDS(maxNum){
	// TODO Auto-generated constructor stub

}

bool Foundation::canPushCard(Card* card) {
			if(queue->isEmpty() && card->getNumber() == 1) {
				return true;
			}else if (queue->getCardFront()->getSuit() == card->getSuit()){
				if (queue->getCardFront()->getNumber() == card->getNumber()++){
					return true;
				}else{
					return false;
				}
			}else {
				return false;
			}
		}
void Foundation::setCardFront(Card* card){
	queue->setCardFront(card);
}
Card* Foundation::show(){
	return queue->show();
}

bool Foundation::isFull(){
	if(	queue->getSize()==MAX_NUM_CARDS){
		return true;
	}else{
		return false;
	}
}
bool Foundation::canTakeCard(){
	return false;
}

std::list<Card *> Foundation::getVisibleCards(){
	return queue->getVisibleCards();

}




} /* namespace Models */
