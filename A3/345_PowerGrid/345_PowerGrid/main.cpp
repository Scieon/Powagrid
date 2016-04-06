#include <iostream>
#include <string>

#include "House.h"
#include "Player.h"
#include "HouseManager.h"
#include "Resource.h"
#include "Board.h"
#include "ResourceMarket.h"
#include "Powerplant.h"
#include "IOFile.h"

#include "BasicStatistics.h"
#include "ElektrosStats.h"
#include "ResourceStats.h"

using namespace std;

int main() {

	int CHANGETHISFORTURNS = 4; //number of turns to play

	cout << "Welcome to Funkenschlag" << endl;
	cout << "In order to enjoy the full experience, please make sure you make "
		<< endl << "the command prompt bigger than it's original size. Thank you." << endl << endl;


	cout << "\nStarting new game..." << endl;

	// Beginning of Second Distinct Part

	int nbPlayers;
	string color;
	cout << "You can only play with 2 players. More player option coming soon" << endl;

	std::vector<Player*> vector_player;

	//Add the number of players in the vector collection
	for (int i = 1; i < 3; i++)
	{
		cout << "\nPlayer " << i << endl << "Please insert your color: ";
		cin >> color;
		Player* p = new Player(color);
		vector_player.push_back(p);
	}

	//Now we have to get the areas played from players
	//create area and city manager
	AreaManager * area_manager = new AreaManager();


	vector<Area> * areas = new vector<Area>();




		//creating areas
		Area area1(1);
		Area area2(2);
		Area area3(3);

		//create areaVector
		areas->push_back(area1);
		areas->push_back(area2);
		areas->push_back(area3);



	//Set areas
	area_manager->setGameAreas(*areas);

	//Create game map according to areas
	Map * gameMap = new Map(area_manager); //do not delete

	Board * turn = new Board(vector_player, gameMap);
	

	//Observer
	Statistics * b1 = new BasicStatistics(turn);
	//b1 = new ElektrosStats(b1, turn);

	b1 = new ElektrosStats(b1);
	b1 = new ResourceStats(b1);
	

	//turns
	int y = 1;
	while (y < CHANGETHISFORTURNS) {

		//--------------------------------------------------------------------------------
		//b1->update();
		//system("pause");
		//--------------------------------------------------------------------------------

		turn->turnOrder();
		turn->buyPowerPlant();
		turn->buyRawMaterial();


		turn->building();
		//turn->bureaucracy();
		turn->incrementTurnCounter(); //HAS BE REMOVED AFTER WE FINISH BUREACRACY


		y++;
	}

	return 0;
}
