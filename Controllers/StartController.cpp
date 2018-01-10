/*
 * StartController.cpp
 *
 *  Created on: 6 Nov 2017
 *      Author: alejandrobadillo
 */

#include "StartController.h"

namespace Controllers {

StartController::StartController(Models::Game* game): Controller (game){
}
StartController::~StartController(){
}
void StartController::manualStart(bool manual){
	Controller::init();
	if(manual)
		Controller::setState(Enums::States::MANUAL_GAME);
	else{
		Controller::setState(Enums::States::DEMO_GAME);
	}
}

void StartController::acept(OperationControllerVisitor* controllerVisitor){
		controllerVisitor->visit(this);
	}
} /* namespace Controllers */
