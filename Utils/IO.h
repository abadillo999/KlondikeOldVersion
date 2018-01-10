/*
 * IO.h
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef UTILS_IO_H_
#define UTILS_IO_H_

namespace Views {

class IO {
public:
	IO();
	virtual ~IO();
	std::string IO::read() const;
    char readChar() const;
    int readInt() const;
    void write(const std::string output) const;
};

} /* namespace Views */

#endif /* UTILS_IO_H_ */
