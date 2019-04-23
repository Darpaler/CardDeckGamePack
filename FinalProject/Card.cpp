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
	if (newSuit >= Suits::COUNT) 
	{
		//TODO: loop through enums
		newSuit = Suits(newSuit - (Suits::COUNT * (newSuit/Suits::COUNT)));

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

string Card::GetRank()
{
	return rank;
}

int Card::GetValue()
{
	return value;
}
