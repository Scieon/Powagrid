#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Resource.h"
//include coal
using std::string;


class Player {


public:

	Player();
	Player(string color);
	~Player();
	void showInfo() const;;
	int getElektros() const;
	void setElektros(int elektros);
	
	//Test functions
	void showColor();

	//To be implemented
	int getHouses() const;
	void setHouses(int houses);

private:
	static int number_of_players;
	int elektros;
	string color;
	int number_of_houses;
	Resource *resources[3];
	//Coal coal;


};





#endif