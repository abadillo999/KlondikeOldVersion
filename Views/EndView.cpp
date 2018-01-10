/*
 * EndView.cpp
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#include "EndView.h"

namespace Views {

void interact(Controllers::EndController* controller){
	BooleanDialog* boolean;
	bool response = boolean->read("Do you wish to continue? [Y]/[N]");
	controller->CarryOn(response);
	if (!response){
	   IO* io;
	   io->write("Bye Bye!");
	};


} /* namespace Views */
