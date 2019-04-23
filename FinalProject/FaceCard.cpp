#include "pch.h"
#include "FaceCard.h"


FaceCard::FaceCard()
{
}

FaceCard::~FaceCard()
{
}

//Set face cards using a face and set the value depending on the game type
void FaceCard::SetRank(Faces face, int gameType)
{
	if (face >= Faces::COUNT)
	{
		//Loops through faces if it exceeds the enum
		face = Faces(face - (Faces::COUNT * (face / Faces::COUNT)));

	}
	switch (face)
	{
	case Ace:
		rank = "Ace";
		break;
	case Jack:
		rank = "Jack";
		break;
	case Queen:
		rank = "Queen";
		break;
	case King:
		rank = "King";
		break;
	}
	
	switch (gameType)
	{
	//Black Jack Rules
	case 0:
		if (face == Ace) 
		{
			//Ace is 1 or 11
			value = 1;
		}
		else
		{
			//Face cards are all 10
			value = 10;
		}
		break;

	//War Rules
	case 1:
		if (face == Ace)
		{
			//Ace is higher than King
			value = King + 11;
		}
		else
		{
			//Face values are in order and higher than pip cards
			value = face + 10;
		}
		break;

	//Generic Rules
	default:
		if (face == Ace)
		{
			//Ace is 1
			value = 1;
		}
		else
		{
			//Face values are in order and higher than pip cards
			value = face + 10;
		}
		break;
	}
}
