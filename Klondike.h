/*
 * Klondike.h
 *
 *  Created on: 12 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef KLONDIKE_H_
#define KLONDIKE_H_

class Klondike {
public:
	Klondike::Klondike(Views::View* view, Controllers::Logic* logic);
	void start();
private:
	Views::View* view;
	Controllers::Logic* logic;
};

#endif /* KLONDIKE_H_ */
