/*
 * booleanDialog.h
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef UTILS_BOOLEANDIALOG_H_
#define UTILS_BOOLEANDIALOG_H_


namespace Views {

class BooleanDialog {
public:
	BooleanDialog();
	virtual ~BooleanDialog();
	bool read(std::string s) const;

};

} /* namespace Views */

#endif /* UTILS_BOOLEANDIALOG_H_ */
