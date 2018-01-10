/*
 * OperationController.h
 *
 *  Created on: 6 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_OPERATIONCONTROLLER_H_
#define CONTROLLERS_OPERATIONCONTROLLER_H_
#include "OperationControllerVisitor.h"



namespace Controllers {

class OperationController{
public:
    virtual ~OperationController();
	virtual void acept(OperationControllerVisitor* ControllerVisitor) = 0;
};
}

#endif /* CONTROLLERS_OPERATIONCONTROLLER_H_ */
