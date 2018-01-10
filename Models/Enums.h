/*
 * Suits.h
 *
 *  Created on: 1 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_ENUMS_H_
#define MODELS_ENUMS_H_

namespace Enums {
	struct Suits{
		enum Suit {
			UNDEFINED,
			CLUB,
			DIAMOND,
			HEART,
			SPADE,
		};
	};

	struct States{
		enum State {
			UNDEFINED,
			START,
			MANUAL_GAME,
			DEMO_GAME,
			END,
			VICTORY
		};
     };

};

#endif /* MODELS_ENUMS_H_ */
