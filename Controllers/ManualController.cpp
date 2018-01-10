/*
 * ManualController.cpp
 *
 *  Created on: 6 Nov 2017
 *      Author: alejandrobadillo
 */

#include "ManualController.h"

namespace Controllers {

ManualController::ManualController(Models::Game* game) {
	// TODO Auto-generated constructor stub

}

ManualController::~ManualController() {
	// TODO Auto-generated destructor stub
}

void ManualController::acept(OperationControllerVisitor* controllerVisitor){
		controllerVisitor->visit(this);
	}

} /* namespace Controllers */
