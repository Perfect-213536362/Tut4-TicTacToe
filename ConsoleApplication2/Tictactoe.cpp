#include "stdafx.h"
#include"iostream"
#include "Tictactoe.h"

class Tictactoe
{
private:


public:
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

	}
	char Tictactoe::getPlayer(void)
	{

	}
	void Tictactoe::restart()
	{

	}
	void Tictactoe::print()
	{

	}
	void Tictactoe::changePlayer()
	{

	}
	bool Tictactoe::move(int field)
	{

	}
	bool Tictactoe::validateMove(int row, int col)
	{

	}
	bool Tictactoe::isWon(int playtimes)
	{
	}
};
