#pragma once
#include<string>

using namespace std;

class Card
{

public:
	Card();
	~Card();

	enum Suits { Spades, Clubs, Diamonds, Hearts };

	string GetSuit();
	void SetSuit(Suits suit);
	int GetRank();

private:
	string suit;
	
protected:
	int rank;
};

