/*
 * Controller.cpp
 *
 *  Created on: 13 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Controller.h"

namespace Controllers {

Controller::Controller(Models::Game* game): game(game) {
}

Controller::~Controller() {
	// TODO Auto-generated destructor stub
}
void Controller::init(){
	    game->init();
	};
bool Controller::checkKlondike() const{
		return game->checkKlondike();
	};

void Controller::setState(Enums::States::State newState){
	    game->setNewState(newState);
	};

void Controller::moveCard(int Origin, int Destination){
		game->moveCard(Origin, Destination);
		if(game->checkKlondike())
			game->setNewState(Enums::States::VICTORY);
	};

Models::Stack* Controller::getStack(int position){
		return game->getStack(position);
	};

Enums::States::State Controller::getState(){
		return game->getState();
	};

} /* namespace Controllers */
