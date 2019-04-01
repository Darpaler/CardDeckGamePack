#pragma once
#include "Card.h"
class PipCard :
	public Card
{
public:
	PipCard();
	~PipCard();

	enum Pips { Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten};
	void SetRank(Pips pip);

};

