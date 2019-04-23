#include "pch.h"
#include "FaceCard.h"


FaceCard::FaceCard()
{
}

FaceCard::~FaceCard()
{
}

void FaceCard::SetRank(Faces face, int gameType)
{
	if (face >= Faces::COUNT)
	{
		//TODO: loop through enums
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
	case 0:
		if (face == Ace) 
		{
			//TODO: Ace is 1 or 11
			value = 0;
		}
		else
		{
			value = 10;
		}
	case 1:
		if (face == Ace)
		{
			//Ace is higher than King
			value = King + 11;
		}
		else
		{
			value = face + 10;
		}
	default:
		if (face == Ace)
		{
			//Ace is 1
			value = 1;
		}
		else
		{
			value = face + 10;
		}
		break;
	}
}
