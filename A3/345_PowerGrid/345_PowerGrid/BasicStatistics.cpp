#include "BasicStatistics.h"

//Default Constructor
BasicStatistics::BasicStatistics() {}

//Constructor attaching this observer onto subject
BasicStatistics::BasicStatistics(Board * board) : Statistics(board) {
	//subject = board;
	//subject->attach(this);
}


//Destructor freeing heap storage
BasicStatistics::~BasicStatistics() {
	//delete subject;
}

void BasicStatistics::update() {

	cout << "------------------- Displaying Basic Statistics -------------------\n\n";
	this->printStatistics();


}

void BasicStatistics::printStatistics() {

	vector<Player*> players = subject->vector_player;
	PowerplantManager * powerplants = subject->powerplants_Vector;
	ResourceMarket * market = subject->market;

	
	for (int i = 0; i < subject->getNumberOfPlayers(); i++) {

		//subject->vector_player[i]->showInfo();   
		cout << "Player " << players[i]->getColor() << " has " << players[i]->getHouseManager()->getHouseCount() << " number of house(s)." << endl;

		int total = players[i]->getResource("Coal") + players[i]->getResource("Garbage") + players[i]->getResource("Oil") + players[i]->getResource("Uranium");
		cout << "Player " << players[i]->getColor() << " has a total of " << total << " resources." << endl << endl;
	}

	for (int j = 0; j < 8; j++) {
		if (j < 4) {
			//powerplants->getPlantNumber(i);

			cout << "Powerplant number " << powerplants->getPlantNumber(j) << " is currently in Actual Market." << endl;
		}

		else if (j >= 4) {
			cout << "Powerplant number " << powerplants->getPlantNumber(j) << " is currently in Future Market." << endl;
		}

	}
	cout << endl;

	cout << "Remaining Coal in Market: " << market->getTotal("Coal") << endl
		<< "Remaining Oil in Market: " << market->getTotal("Oil") << endl
		<< "Remaining Garbage in Market: " << market->getTotal("Garbage") << endl
		<< "Remaining Uranium in Market: " << market->getTotal("Uranium") << endl;


	cout << endl;
}


