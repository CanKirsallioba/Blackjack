#pragma once

#include <iostream>
#include <string>
using namespace std;


class Card {

	Card(string suit, int number);
	Card(Card& cardToCopy);
	~Card();
	void operator= (const Card& right);
	string getSuit() const;
	int getNumber() const;
	void printCard();
	//no need for mutator functions

private:
	string suit;
	int number;

};