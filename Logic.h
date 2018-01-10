/*
 * Logic.h
 *
 *  Created on: 11 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef LOGIC_H_
#define LOGIC_H_
#include "OperationController.h"
#include <map>


namespace Controllers {


class Logic {
public:
	Logic();
	OperationController* Logic::getOperationController() const;

private:
	   Models::Game* game;
	   std::map<Enums::States::State, OperationController*> gameControllers;
};

}

#endif /* LOGIC_H_ */
