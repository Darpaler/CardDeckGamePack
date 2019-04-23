#include "pch.h"
#include "PipCard.h"


PipCard::PipCard()
{
}


PipCard::~PipCard()
{
}

void PipCard::SetRank(Pips pip)
{
	if (pip >= Pips::COUNT)
	{
		//TODO: loop through enums
		pip = Pips(pip - (Pips::COUNT * (pip/Pips::COUNT)));

	}
	switch (pip) 
	{
	case Two:
		rank = "Two";
		break;
	case Three:
		rank = "Three";
		break;
	case Four:
		rank = "Four";
		break;
	case Five:
		rank = "Five";
		break;
	case Six:
		rank = "Six";
		break;
	case Seven:
		rank = "Seven";
		break;
	case Eight:
		rank = "Eight";
		break;
	case Nine:
		rank = "Nine";
		break;
	case Ten:
		rank = "Ten";
		break;
	}
	value = pip + 2;
}
