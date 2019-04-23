#pragma once
#include "FaceCard.h";
#include "PipCard.h";
#include <vector>;

class Deck
{
public:
	Deck();
	~Deck();
	const int DECK_SIZE = 52;
	const int SUIT_SIZE = 13;
	const int PIPS_PER_SUIT = 9;
	const int FACES_PER_SUIT = 4;
	vector<Card> GetCards();
	//void SetCards(vector<Card> newCards);
	
private:
	
	vector<Card>cards;

};

