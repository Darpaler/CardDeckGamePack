#pragma once
#include "Card.h"
class FaceCard : public Card
{
public:
	FaceCard();
	~FaceCard();

	enum Faces {Ace, Jack, Queen, King};
	void SetRank(Faces face);
};

