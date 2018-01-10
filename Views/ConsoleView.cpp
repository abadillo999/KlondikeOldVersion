/*
 * ConsoleView.cpp
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#include "ConsoleView.h"

namespace Views {

ConsoleView::ConsoleView() {

}

void ConsoleView::interact(Controllers::OperationController* controller){
	controller->acept(this);
}

void ConsoleView::visit(Controllers::StartController* startController) {
	startView->interact(startController);
}

void ConsoleView::visit(Controllers::ManualController* colocateController) {
	gameView->interact(colocateController);
}

void ConsoleView::visit(Controllers::DemoController* continueController) {
	gameView->interact(continueController);
}

void ConsoleView::visit(Controllers::EndController* continueController) {
	endView->interact(continueController);
}

void ConsoleView::visit(Controllers::CelebrateController* celebrateController) {
	celebrateView->interact(celebrateController);
}



} /* namespace Views */
