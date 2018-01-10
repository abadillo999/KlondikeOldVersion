/*
 * OperationControllerVisitor.h
 *
 *  Created on: 11 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_OPERATIONCONTROLLERVISITOR_H_
#define CONTROLLERS_OPERATIONCONTROLLERVISITOR_H_


namespace Controllers {
class StartController;
class ManualController;
class EndController;
class CelebrateController;
class DemoController;


class OperationControllerVisitor {
public:
	virtual ~OperationControllerVisitor() {};
	virtual void visit(StartController* startController) = 0;
	virtual void visit(ManualController* manualController) = 0;
	virtual void visit(DemoController* demoController) = 0;
	virtual void visit(CelebrateController* celebrateController) = 0;
	virtual void visit(EndController* endController) = 0;
};

} /* namespace Controllers */

#endif /* CONTROLLERS_OPERATIONCONTROLLERVISITOR_H_ */
