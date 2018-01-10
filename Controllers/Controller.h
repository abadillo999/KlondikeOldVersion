	/*
 * Controller.h
 *
 *  Created on: 13 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_CONTROLLER_H_
#define CONTROLLERS_CONTROLLER_H_
#include "../Models/Game.h"
#include "../Models/Stack.h"
#include "../Models/Deck.h"
#include "../Models/Pile.h"




namespace Controllers {

class Controller {
public:
	Controller(Models::Game* game);
	virtual ~Controller();
	void init();
	bool checkKlondike() const;
	void setState(Enums::States::State newState);
	void moveCard(int Origin, int Destination);
	Models::Stack* getStack(int position);
	Enums::States::State getState();

private:
		Models::Game* game;
};

} /* namespace Controllers */

#endif /* CONTROLLERS_CONTROLLER_H_ */
