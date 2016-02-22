#ifndef PLAYER_H
#define PLAYER_H
#include <string>
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
	

	//To be implemented
	int getHouses() const;
	void setHouses(int houses);

private:
	static int number_of_players;
	int elektros;
	string color;
	int number_of_houses;
	//Coal coal;


};





#endif