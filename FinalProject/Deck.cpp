#include "pch.h"
#include "Deck.h"


Deck::Deck()
{
	for (int i = 0; i < DECK_SIZE; i++) 
	{
		//TODO: Create a deck of each card
		if (i < 36) 
		{
			PipCard card;
			card.SetRank((PipCard::Pips)i);
			card.SetSuit((Card::Suits)i);
			cards[i] = card;
		}
		else 
		{
			FaceCard card;
			cards[i] = card;
		}
	}
}

Deck::~Deck()
{
}

vector<Card> Deck::GetCards()
{
	return cards;
}
