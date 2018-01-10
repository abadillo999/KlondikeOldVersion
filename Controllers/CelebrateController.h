/*
 * VictoryController.h
 *
 *  Created on: 6 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_CELEBRATECONTROLLER_H_
#define CONTROLLERS_CELEBRATECONTROLLER_H_
#include "Controller.h"
#include "OperationController.h"

namespace Controllers {


class CelebrateController: public Controller, public OperationController {
public:
	CelebrateController(Models::Game* game);
	virtual ~CelebrateController();
	void acept(OperationControllerVisitor* controllerVisitor);

};

} /* namespace Controllers */

#endif /* CONTROLLERS_CELEBRATECONTROLLER_H_ */
