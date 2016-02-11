#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Coal.h"
using std::string;


class Player {


public:

	Player();
	Player(string color);
	~Player();
	void showInfo() const;;
	int getElektros() const;
	void setElektros(int elektros);

private:
	static int number_of_players;
	int elektros;
	string color;
	int number_of_houses;
	Coal coal;


};





#endif