#pragma once
#include "FaceCard.h";
#include "PipCard.h";
#include <vector>;

class Deck
{
public:

	//Constructors
	Deck(int gameType);
	Deck(bool asHand, int gameType);
	~Deck();
	
	//Constants
	const int DECK_SIZE = 52;
	const int SUIT_SIZE = 13;
	const int PIPS_PER_SUIT = 9;
	const int FACES_PER_SUIT = 4;

	//Getters
	vector<Card> GetCards();
	int GetGameType();

	//Setters
	void SetDeck();
	void SetGameType(int newGameType);

	//Methods
	void AddCards(vector<Card> newCards);
	void ShuffleDeck();
	void ShuffleDeck(bool allCards);
	vector<Card> Deal(int amountOfCards);
	void ClearDeck();

private:

	//Variables
	vector<Card>cards;	//All of the cards in the deck
	int gameType;		//The game type

};

