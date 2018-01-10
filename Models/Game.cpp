/*
 * Game.cpp
 *
 *  Created on: 13 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Game.h"

namespace Models {

Game::Game() {
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}
void Game::init(){
    if (deck != nullptr || board != nullptr)
		deleteCurrentGame();
    deck->init(MAX_NUM_CARDS);
    board = new Board(deck, MAX_NUM_CARDS);
}
void Game::deleteCurrentGame(){
    delete deck; deck = nullptr;
	delete board; board = nullptr;
	}

void Game::setNewState(Enums::States::State NewState){
   state = NewState;
}

bool Game::checkKlondike() const {
   return board->checkKlondike();
}

Enums::States::State Game::getState() const {
	return state;
}


void Game::moveCard(int origin, int destination){
	board->move(origin, destination);

}
Stack* Game::getStack(int position) {
	return board->getStack(position);
}




}

