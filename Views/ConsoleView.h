/*
 * ConsoleView.h
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_CONSOLEVIEW_H_
#define VIEWS_CONSOLEVIEW_H_

#include "../Controllers/CelebrateController.h"
#include "../Controllers/OperationController.h"
#include "../Controllers/StartController.h"
#include "../Controllers/ManualController.h"
#include "../Controllers/EndController.h"
#include "../View.h"





namespace Views {
class StartView;
class GameView;
class CelebrateView;
class EndView;

class ConsoleView: public View {
public:
	ConsoleView();
	void interact(Controllers::OperationController* controller);
	void visit(Controllers::StartController* startController);
	void visit(Controllers::ManualController* colocateController);
	void visit(Controllers::DemoController* continueController);
	void visit(Controllers::EndController* continueController);
	void visit(Controllers::CelebrateController* continueController);
private:
	Views::StartView* startView;
	Views::GameView* gameView;
	Views::CelebrateView* celebrateView;
	Views::EndView* endView;
};

} /* namespace Views */

#endif /* VIEWS_CONSOLEVIEW_H_ */
