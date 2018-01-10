/*
 * Logic.cpp
 *
 *  Created on: 11 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Logic.h"

#include "CelebrateController.h"
#include "OperationController.h"
#include "StartController.h"
#include "ManualController.h"
#include "EndController.h"
#include "Game.h"





namespace Controllers {

Logic::Logic(){
		   gameControllers[Enums::States::State::START] = new Controllers::StartController(game);
		   gameControllers[Enums::States::State::DEMO_GAME] = new Controllers::DemoController(game);
		   gameControllers[Enums::States::State::MANUAL_GAME] = new Controllers::ManualController(game);
		   gameControllers[Enums::States::State::END] = new Controllers::EndController(game);
		   gameControllers[Enums::States::State::VICTORY] = new Controllers::CelebrateController(game);
		   gameControllers[Enums::States::State::UNDEFINED] = nullptr;
}

Logic::~Logic(){

}

OperationController* Logic::getOperationController() const{
 return gameControllers.at(game->getState());
}


} /* namespace Models */
