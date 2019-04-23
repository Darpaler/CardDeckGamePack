#pragma once
#include "Card.h"
class FaceCard : public Card
{
public:
	FaceCard();
	~FaceCard();

	enum Faces {Ace, Jack, Queen, King, COUNT};
	void SetRank(Faces face, int gameType);
};

