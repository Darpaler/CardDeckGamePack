#pragma once
#include<string>

using namespace std;

class Card
{

public:
	Card();
	~Card();

	enum Suits { Spades, Clubs, Diamonds, Hearts, COUNT };

	string GetSuit();
	void SetSuit(Suits suit);
	string GetRank();
	int GetValue();

private:
	string suit;
	
protected:
	string rank;
	int value;
};

