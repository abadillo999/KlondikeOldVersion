/*
 * DemoController.cpp
 *
 *  Created on: 12 Nov 2017
 *      Author: alejandrobadillo
 */

#include "DemoController.h"

namespace Controllers {

DemoController::DemoController() {
	// TODO Auto-generated constructor stub

}

DemoController::~DemoController() {
	// TODO Auto-generated destructor stub
}
void DemoController::acept(OperationControllerVisitor* controllerVisitor){
	controllerVisitor->visit(this);
};


} /* namespace Controllers */
