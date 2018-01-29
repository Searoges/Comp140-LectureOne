// Comp140Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"


int main()
{
	/*
	---------------------------------------------------------------------------------------
		Player Object Creation
	---------------------------------------------------------------------------------------
	*/
	Player playerOne; // create object using default constructor using the stack

	Player* playerTwo = new Player(); // dynamic creation of object using the heap
	/*
	---------------------------------------------------------------------------------------
		Player Object GetHealth -> Stack
	---------------------------------------------------------------------------------------
	*/
	int currentHealth = playerOne.GetHealth();
	/*
	---------------------------------------------------------------------------------------
	Player Object GetHealth -> Heap
	---------------------------------------------------------------------------------------
	*/
	playerTwo->GetHealth();

	/*
	---------------------------------------------------------------------------------------
		Dynamic Memory Clean Up
	---------------------------------------------------------------------------------------
	*/
	if (playerTwo)
	{
		delete playerTwo;
		playerTwo = nullptr; // clear object from heap memory to prevent memory leak
	}

    return 0; // clear stack memory
}

