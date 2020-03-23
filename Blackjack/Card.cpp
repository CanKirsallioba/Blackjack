#pragma once

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include "Card.h"

//Constructor
//suit and number passed to the function
Card::Card(string s, int n) {
	this->suit = s;
	this->number = n;
}

//Copy constructor
//cardToCopy passed to the function using pass by reference
Card::Card(Card& cardToCopy) {
	this->number = cardToCopy.number;
	this->suit = cardToCopy.suit;
}

//Destructor
//nothing is passed to the function
Card::~Card() {
	//nothing to destruct
}

//overloading the = operator
//right is passed to the function using pass by reference
void Card::operator= (const Card& right) {
	//check for preventing self assignment
	if (this != &right) {
		this->suit = right.suit;
		this->number = right.number;
	}
}

//getter function for the suit
//nothing is passed to the function
string Card::getSuit() const {
	return this->suit;
}

//getter function for the number
//nothing is passed to the function
int Card::getNumber() const {
	return this->number;
}


//function to print the card
//nothing is passed to the function
void Card::printCard() {
	cout << number << " of " << suit << "s" << endl;
}

#endif //BLACKJACK_CARD_H