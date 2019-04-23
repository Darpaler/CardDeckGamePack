#pragma once
#include<string>

using namespace std;

class Card
{

public:
	//Constructors
	Card();
	~Card();

	//The different Suits
	enum Suits { Spades, Clubs, Diamonds, Hearts, COUNT };

	//Getters
	string GetSuit();
	string GetRank();
	int GetValue();

	//Setters
	void SetSuit(Suits suit);
	void SetRank(string newRank);
	void SetValue(int newValue);

private:
	string suit;	//The cards current suit
	
protected:
	string rank;	//The cards number or face
	int value;		//The cards value dependent on the game type
};

