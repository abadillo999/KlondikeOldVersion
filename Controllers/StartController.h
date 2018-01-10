/*
 * StartController.h
 *
 *  Created on: 6 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_STARTCONTROLLER_H_
#define CONTROLLERS_STARTCONTROLLER_H_
#include "OperationControllerVisitor.h"
#include "OperationController.h"
#include "../Models/Game.h"

namespace Controllers {

class StartController : public Controller, public OperationController {
public:
	StartController(Models::Game* game);
	virtual ~StartController();
	void manualStart(bool manual);
	void acept(OperationControllerVisitor* controllerVisitor);
};

} /* namespace Controllers */

#endif /* CONTROLLERS_STARTCONTROLLER_H_ */
