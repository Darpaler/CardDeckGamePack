#include "pch.h"
#include "Deck.h"
#include "boost/range/algorithm.hpp"

//Must Specify Game Type
Deck::Deck(int gameType)
{
	SetGameType(gameType);
	SetDeck();
}

//Bool sets whether the deck is automatically set up or not
Deck::Deck(bool asEmpty, int gameType)
{
	SetGameType(gameType);
	if (!asEmpty)
	{
		SetDeck();
	}
}

Deck::~Deck()
{
}

vector<Card> Deck::GetCards()
{
	return cards;
}

//Add cards to the bottom of the deck
void Deck::AddCards(vector<Card> newCards)
{
	for (int i = 0; i < newCards.size(); i++) 
	{
		cards.push_back(newCards[i]);
	}
}

//Shuffle the deck
void Deck::ShuffleDeck()
{
	boost::range::random_shuffle(cards);
}

//Shuffle cards back into the deck
void Deck::ShuffleDeck(bool allCards)
{
	if (allCards) 
	{
		SetDeck();
	}
	boost::range::random_shuffle(cards);
}

//Set up a standard 52 card deck
void Deck::SetDeck()
{
	cards.clear();
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
			fCard.SetRank((FaceCard::Faces)((i - (SUIT_SIZE * (i / SUIT_SIZE))) - PIPS_PER_SUIT), gameType);
			card = fCard;
		}
		card.SetSuit((Card::Suits)(i / SUIT_SIZE));
		cards.push_back(card);
	}
}

//Take cards off the deck
vector<Card> Deck::Deal(int amountOfCards)
{
	vector<Card> dealtCards;
	for (int i = 0; i < amountOfCards; i++) 
	{
		dealtCards.push_back(cards[0]);
		cards.erase(cards.begin());
	}
	return dealtCards;
}

int Deck::GetGameType()
{
	return gameType;
}

void Deck::SetGameType(int newGameType)
{
	gameType = newGameType;
}

//Clears out the deck
void Deck::ClearDeck()
{
	cards.clear();
}
