#include "stdafx.h"
#include"iostream"
#include<Windows.h>
#include<stdlib.h>
#include "Tictactoe.h"


using namespace std;
class Tictactoe
{
private:
	char currentPlayer;
	char Board[3][3];  // board 
	int palce;

public:
	char field;
	Tictactoe();
	~Tictactoe();

	Tictactoe::Tictactoe()
	{

		for (int rows = 0; rows < 3; rows++)
		{
			for (int cols = 0; cols < 3; cols++)
			{
				Board[rows][cols] = ' ';
			}

		}
		currentPlayer = 'X';
	}

	Tictactoe::~Tictactoe()
	{

	}


	void Tictactoe::setPlayer(char player = 'X')
	{
		currentPlayer = player;

	}

	char Tictactoe::getPlayer(void)
    {
		return currentPlayer;
	}

	void Tictactoe::restart()
	{

	}
	void Tictactoe::print()
	{
		{
			int rows, cols;
		 	int boardpostion = 1;
		
			cout << endl << " " << "____________________" << "\n";
			 	for (rows = 0; rows < 3; rows++)
				 	{
				 		cout << " | ";
				 		for (cols = 0; cols < 3; cols++)
						{
			 			cout << " " << Board[rows][cols] << " | ";
				 		}
			
				 	cout << endl << " " << "____________________" << "\n";
			 	}
         }


	}
	void Tictactoe::changePlayer()
	{

	}
	bool Tictactoe::move(int field)
	{

	}
	bool Tictactoe::validateMove(int row, int col)
	{
		bool isvalid;
		                                                                // switching player 
		switch (field)
		{
		case 1:
			isvalid = validateMove(0, 0);                              // check if it's an empty space 
			if (isvalid == true)
			{
				Board[0][0] = currentPlayer;                           // allow player to make a move
				return true;

			}
			else {
				return  false;                                        //if the space is taken, then it's an error move 
			}
			break;
		case 2:
				isvalid = validateMove(0, 1);                             // check if it's an empty space 
				if (isvalid == true)
				{
					Board[0][1] = currentPlayer;                         // allow player to make a move 
					return true;
				}
				else {
					return  false;                                       //if the space is taken, then it's an error move 

				}
				break;
			case 3:
				isvalid = validateMove(0, 2);                            // check if it's an empty space 
				if (isvalid == true)
				{
					Board[0][2] = currentPlayer;                          // allow player to make a move 
					return true;
				}
				else {
					return  false;                                       //if the space is taken, then it's an error move 
				}
				break;
			case 4:
				isvalid = validateMove(1, 0);                            // check if it's an empty space 
				if (isvalid)
				{
					Board[1][0] = currentPlayer;                        // allow player to make a move 
					return true;
				}
				else {
					return  false;                                        //if the space is taken, then it's an error move 
				}
				break;
			case 5:
				isvalid = validateMove(1, 1);                            // check if it's an empty space 
				if (isvalid == true)
				{
					Board[1][1] = currentPlayer;                       // allow player to make a move 
					return true;
				}
				else {
					return  false;                                    //if the space is taken, then it's an error move 

				}
				break;
			case 6:
				isvalid = validateMove(1, 2);                          // check if it's an empty space 
				if (isvalid == true)
				{
					Board[1][2] = currentPlayer;                       // allow player to make a move
					return true;
				}
				else {
					return  false;                                    //if the space is taken, then it's an error move 
				}
				break;
			case 7:
				isvalid = validateMove(2, 0);                         // check if it's an empty space 
				if (isvalid == true)
				{
					Board[2][0] = currentPlayer;                      // allow player to make a move
					return true;
				}
				else {
					return  false;                                    //if the space is taken, then it's an error move 
				}
				break;
			case 8:
				isvalid = validateMove(2, 1);                         // check if it's an empty space 
				if (isvalid == true)
				{
					Board[2][1] = currentPlayer;                      // allow player to make a move 
					return true;
				}
				else {
					return  false;                                   //if the space is taken, then it's an error move
				}
				break;
			case 9:
				isvalid = validateMove(2, 2);                         // check if it's an empty space 
				if (isvalid == true)
				{
					Board[2][2] = currentPlayer;                      // allow player to make a move 
					return true;
				}
				else {
					return  false;                                    //if the space is taken, then it's an error move
				}
				break;
			default:                                                 // enter a 1>=value <=9 or a character 
				return false;
		}
	}
	bool Tictactoe::isWon(int playtimes)
	{
	}
};
