// FinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "FaceCard.h"
#include "PipCard.h"
#include "Deck.h"
#include <iostream>
using namespace std;

//Variables
int gameSelection;		//The game the player chose to player

//Games 
void RunBlackJack();
void RunWar();

int main()
{
	cout << "Welcome to the Card Game Multi Pack!\n";
	do {
		cout << "Choose your game!\n";
		cout << "Black Jack (1), War (2), or Quit Application (3)\n";
		cout << "Enter Number: ";
		cin >> gameSelection;
		if (gameSelection == 1) {
			cout << "\nStarting Black Jack!\n";
			RunBlackJack();
			cout << "Game Over!\n\n";
		}
		else if (gameSelection == 2) {
			cout << "\nStarting War!\n";
			RunWar();
			cout << "Game Over!\n\n";
		}
	} while (gameSelection != 3);
	cout << "\nQuitting Application.\n";
}

void RunBlackJack() 
{
	//TODO: Make Black Jack game.
	
}

void RunWar()
{
	//TODO: Make War game.
	Deck deck;
	//TODO: Test enum loops
	for (int i = 0; i < deck.DECK_SIZE; i++) 
	{
		cout << "This card is the " << deck.GetCards()[i].GetRank() << " of " << deck.GetCards()[i].GetSuit() << endl;
	}
}
