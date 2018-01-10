/*
 * Klondike.cpp
 *
 *  Created on: 12 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Klondike.h"
#include "View.h"
#include "Logic.h"


Klondike::Klondike(Views::View* view, Controllers::Logic* logic){
	this->logic = logic;
	this->view = view;
}

void Klondike::start() {
	Controllers::OperationController* controller;
			do {
				controller = logic->gameControllers();
				if (controller != nullptr){
					view->interact(controller);
				}
			} while (controller != nullptr);
}

