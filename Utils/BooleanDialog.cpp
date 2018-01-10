/*
 * booleanDialog.cpp
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#include "BooleanDialog.h"

namespace Views {

BooleanDialog::BooleanDialog() {
	// TODO Auto-generated constructor stub

}

BooleanDialog::~BooleanDialog() {
	// TODO Auto-generated destructor stub
}

bool BooleanDialog::read(std::string s) const {
	char answer;
    IO* io;
    io->write(s);
    bool valid;
	   do
	   {
	      answer = io->readChar();
	      valid = (answer == 'y') || (answer == 'Y') || (answer == 'n')
	         || (answer == 'N');
	      if (!valid)
	      {
	         io->write("Allowed characters 'y' 'Y' 'n' 'N'");
	      }
	   } while (!valid);
	   return (answer=='y') || (answer=='Y');
}


} /* namespace Views */
