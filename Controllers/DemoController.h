/*
 * DemoController.h
 *
 *  Created on: 12 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_DEMOCONTROLLER_H_
#define CONTROLLERS_DEMOCONTROLLER_H_

namespace Controllers {
class OperationControllerVisitor;
class Controller;


class DemoController: public Controller, public OperationController  {
public:
	DemoController();
	virtual ~DemoController();
	void acept(OperationControllerVisitor* controllerVisitor);
};

} /* namespace Controllers */

#endif /* CONTROLLERS_DEMOCONTROLLER_H_ */
