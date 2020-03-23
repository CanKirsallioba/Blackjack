//Author: Can Kirsallioba
//Date  : 20.03.2020
//Class : Deck.h
//Content: Involves functions that will be used in the deck objects, will be included in the player class.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Card.h"

using namespace std;

class Deck {


public:
	void initialize();
	void shuffle_deck();
	bool is_it_empty();
	int getCard();
	void print_deck();
	

private:
	int* deck;

};