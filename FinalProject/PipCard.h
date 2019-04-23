#pragma once
#include "Card.h"
class PipCard :
	public Card
{
public:
	//Constructors
	PipCard();
	~PipCard();

	//The different pip card types
	enum Pips { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, COUNT};

	//Setters
	void SetRank(Pips pip);
};

