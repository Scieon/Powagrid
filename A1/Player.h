#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Resource.h"
#include "House.h"
#include "Coal.h"
#include "Oil.h"
#include "Garbage.h"
#include "Uranium.h"

#include "Powerplant.h"

using std::string;


class Player {


public:

	Player();
	Player(string color);
	~Player();
	void showInfo() const;;
	int getElektros() const;
	void setElektros(int elektros);
	void addElektros(int elektros);

	void showPlants();
	void addResource(string type, int quantity);
	void addPlant(Powerplant p1);

	


private:
	static int number_of_players;
	int elektros;
	Resource *resources[4];
	House houses;
	
	Powerplant powerplants[3];
	int numberOfPlants = 0;

};





#endif