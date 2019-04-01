#include "pch.h"
#include "Card.h"


Card::Card()
{
}

Card::~Card()
{
}

string Card::GetSuit() 
{
	return suit;
}

void Card::SetSuit(Suits newSuit)
{
	if (newSuit > 4) 
	{
		//TODO: loop through enums
	}
	switch (newSuit)
	{
	case Card::Spades:
		suit = "Spades";
		break;
	case Card::Clubs:
		suit = "Clubs";
		break;
	case Card::Diamonds:
		suit = "Diamonds";
		break;
	case Card::Hearts:
		suit = "Hearts";
		break;
	}
}

int Card::GetRank()
{
	return rank;
}
