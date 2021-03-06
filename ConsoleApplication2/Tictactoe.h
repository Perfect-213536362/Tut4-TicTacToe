#pragma once
#pragma once
#ifndef TICTACTOE_H
#define TICTACTOE_H


class Tictactoe
{
private:
	char currentPlayer;
 	char Board[3][3]; 
	int palce;


public:
	Tictactoe();
	~Tictactoe();
	void Tictactoe::setPlayer();
	char Tictactoe::getPlayer();
	void Tictactoe::restart();
	void Tictactoe::print();
	void Tictactoe::changePlayer();
	bool Tictactoe::move();
	bool Tictactoe::validateMove();
	bool Tictactoe::isWon();
};
#endif // !TICTACTOE_H
