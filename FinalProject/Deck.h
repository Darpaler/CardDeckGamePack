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
	vector<Card> GetCards();
	//void SetCards(vector<Card> newCards);

private:
	
	vector<Card>cards;

};

