/*
 * View.h
 *
 *  Created on: 12 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_VIEW_H_
#define VIEWS_VIEW_H_

namespace Controllers{
class OperationController;
class OperationControllerVisitor;
}
namespace Views {

class View : public Controllers::OperationControllerVisitor{
public:
	View();
	void interact(Controllers::OperationController* controller);
};
}
#endif /* VIEWS_VIEW_H_ */
