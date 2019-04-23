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
	//Loops through suits if it exceeds the enum
	if (newSuit >= Suits::COUNT) 
	{
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

void Card::SetRank(string newRank)
{
	rank = newRank;
}

int Card::GetValue()
{
	return value;
}

void Card::SetValue(int newValue)
{
	value = newValue;
}
