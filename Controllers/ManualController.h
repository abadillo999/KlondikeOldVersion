/*
 * ManualController.h
 *
 *  Created on: 6 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_MANUALCONTROLLER_H_
#define CONTROLLERS_MANUALCONTROLLER_H_
namespace Controllers {
class OperationControllerVisitor;
class Controller;


class ManualController :public Controller, public OperationController {
public:
	ManualController(Models::Game* game);
	virtual ~ManualController();
	void acept(Controllers::OperationControllerVisitor* controllerVisitor);
};

} /* namespace Controllers */

#endif /* CONTROLLERS_MANUALCONTROLLER_H_ */
