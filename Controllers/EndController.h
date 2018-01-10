/*
 * EndController.h
 *
 *  Created on: 6 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_ENDCONTROLLER_H_
#define CONTROLLERS_ENDCONTROLLER_H_


namespace Controllers {
class OperationControllerVisitor;
class Controller;


class EndController: public Controller, public OperationController {
public:
	EndController(Models::Game* game);
	virtual ~EndController();
	void CarryOn(bool response);
	void acept(OperationControllerVisitor* controllerVisitor);

};

} /* namespace Controllers */

#endif /* CONTROLLERS_ENDCONTROLLER_H_ */
