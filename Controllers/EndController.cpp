/*
 * EndController.cpp
 *
 *  Created on: 6 Nov 2017
 *      Author: alejandrobadillo
 */

#include "EndController.h"

namespace Controllers {

EndController::EndController(Models::Game* game) :Controller(game){
}
EndController::~EndController(){};

void EndController::CarryOn(bool response){
	if (response)
		Controller::setState(Enums::States::START);
	else{
		Controller::setState(Enums::States::UNDEFINED);
	}
}

void EndController::acept(OperationControllerVisitor* controllerVisitor){
			controllerVisitor->visit(this);
		}



} /* namespace Controllers */
