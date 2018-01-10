/*
 * IO.cpp
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#include "IO.h"

#include <iostream>
#include <limits>
#include <cstdlib>

namespace Views {

IO::IO() {
	// TODO Auto-generated constructor stub

}

IO::~IO() {
	// TODO Auto-generated destructor stub
}

std::string IO::read() const
{
   std::string input;
   std::getline(std::cin, input);
   std::cin.clear();

   return input;
}

int IO::readInt() const{
   int value;
   bool check= false;
   do{
	  std::string input = read();
      try{
         value = atoi( input.c_str() );
         check = true;
      }
      catch (const std::exception* e)
      {
    	  write("Please write an Integer.");
      }
   }
   while(!check);
   return value;
}

char IO::readChar() const{
   char input;
   std::cin >> input;
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   std::cin.clear();
   return input;
}

void IO::write(const std::string string) const{
   std::cout << string << std::endl;
}


} /* namespace Views */
