/*
 * CelebrateView.h
 *
 *  Created on: 14 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_CELEBRATEVIEW_H_
#define VIEWS_CELEBRATEVIEW_H_
#include "../Controllers/CelebrateController.h"
namespace Views {

class CelebrateView {
public:
	CelebrateView();
	virtual ~CelebrateView();
	void interact(Controllers::CelebrateController* controller);
};

} /* namespace Views */

#endif /* VIEWS_CELEBRATEVIEW_H_ */
