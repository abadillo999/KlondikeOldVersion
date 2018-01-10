/*
 * VictoryController.cpp
 *
 *  Created on: 6 Nov 2017
 *      Author: alejandrobadillo
 */

#include "CelebrateController.h"

namespace Controllers {

CelebrateController::CelebrateController(Models::Game* game):Controller (game){

}

CelebrateController::~CelebrateController() {
	// TODO Auto-generated destructor stub
}
void CelebrateController::acept(OperationControllerVisitor* controllerVisitor){
		controllerVisitor->visit(this);
	}
}
