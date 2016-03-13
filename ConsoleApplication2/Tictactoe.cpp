#include "stdafx.h"
#include"iostream"
#include<Windows.h>
#include<stdlib.h>


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
		system("cls");                                              //clearing the board ofter each move 
			                                                            // initialising postions  
		 	for (int rows = 0; rows < 3; rows++)
		 	{
		 		for (int cols = 0; cols < 3; cols++)
			 		{
			 			Board[rows][cols] = '*';

			    	}

			}

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
		if (currentPlayer == 'X')
			 	{
			 		currentPlayer = 'O';
			 	}
		 	else
			 	{
			 		currentPlayer = 'X';
				}

	}
	bool Tictactoe::move(int field)
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
	bool Tictactoe::validateMove(int row, int col)
	{
		if (Board[row][col] != 'X' && Board[row][col] != 'O')
			 		return true;                                     //the move is legal 
			else
			 		return false;

	}

	bool Tictactoe::isWon(int playtimes)
	{
		int i, j;
		// checking for draw 
		if (playtimes == 9)
			return false;
		//horizontally checking for winner 
		for (i = 0; i < 3; i++)
		{
			int count = 0;
			for (j = 0; j < 3; j++)
			{
				if (Board[i][j] == currentPlayer)
					count++;
				if (count == 3)
					return true;
			}
		}

		//vertically checking for a winner
		for (i = 0; i < 3; i++)
		{
			int count = 0;
			for (j = 0; j < 3; j++)
			{
				if (Board[j][i] == currentPlayer)
					count++;
				if (count == 3)
					return true;
			}
		}

		// checking for diagonal winner 
		if ((Board[0][0] == currentPlayer) && (Board[1][1] == currentPlayer))
		{
			if (Board[2][2] == currentPlayer)
			{
				return true;
			}
		}
		else if ((Board[0][2] == currentPlayer) && (Board[1][1] == currentPlayer))
		{
			if (Board[2][0] == currentPlayer)
			{
				return true;
			}
		}
		return false;
	}
};
