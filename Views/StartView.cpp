/*
 * StartView.cpp
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#include "StartView.h"

namespace Views {

void StartView::interact(Controllers::StartController* controller){
	BooleanDialog* boolean;
	bool manual = boolean->read("Manual[Y]/[N]?");
	controller->manualStart(manual);
	IO* io;
	io->write("Starting Klondike...");
};


} /* namespace Views */
