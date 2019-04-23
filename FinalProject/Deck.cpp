#include "pch.h"
#include "Deck.h"


Deck::Deck()
{
	PipCard pCard;
	FaceCard fCard;
	Card card;
	//TODO: Test enum loops
	for (int i = 0; i < DECK_SIZE; i++)
	{
		if (i - (SUIT_SIZE * (i / SUIT_SIZE)) < 9)
		{
			pCard.SetRank((PipCard::Pips)(i - (SUIT_SIZE * (i / SUIT_SIZE))));
			card = pCard;
		}
		else
		{
			fCard.SetRank((FaceCard::Faces)((i - (SUIT_SIZE * (i / SUIT_SIZE))) - PIPS_PER_SUIT), 1);
			card = fCard;
		}
		card.SetSuit((Card::Suits)(i / SUIT_SIZE));
		cards.push_back(card);
	}
}

Deck::~Deck()
{
}

vector<Card> Deck::GetCards()
{
	return cards;
}
