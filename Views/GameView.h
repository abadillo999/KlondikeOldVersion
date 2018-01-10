/*
 * GameView.h
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_GAMEVIEW_H_
#define VIEWS_GAMEVIEW_H_

namespace Views {

class GameView {
public:
	GameView();
	virtual ~GameView();
	void interact(Controllers::ManualController* controller);
	void interact(Controllers::DemoController* controller);
};

} /* namespace Views */

#endif /* VIEWS_GAMEVIEW_H_ */
