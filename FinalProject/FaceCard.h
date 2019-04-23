#pragma once
#include "Card.h"
class FaceCard : public Card
{
public:
	//Constructors
	FaceCard();
	~FaceCard();

	//The different face card types
	enum Faces {Ace, Jack, Queen, King, COUNT};

	//Setters
	void SetRank(Faces face, int gameType);
};

