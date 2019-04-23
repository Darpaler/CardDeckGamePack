#pragma once
#include "Card.h"
class PipCard :
	public Card
{
public:
	PipCard();
	~PipCard();

	enum Pips { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, COUNT};
	void SetRank(Pips pip);

};

