#include "ResourceStats.h"
#include "BasicStatistics.h"
#include <iostream>

using namespace std;

ResourceStats::ResourceStats() {

}

ResourceStats::ResourceStats(Statistics * decoratedStats) : StatsDecorator(decoratedStats) {
	subject = decoratedStats->subject;
	subject->detach(decoratedStats);
	subject->attach(this);

}

void ResourceStats::update() {
	cout << "------------------- Displaying test Statistics -------------------\n\n";
	this->printStatistics();
}

void ResourceStats::printStatistics() {

	decoratedStatistics->printStatistics();
	vector<Player*> players = subject->vector_player;
	for (int i = 0; i < subject->getNumberOfPlayers(); i++) {
		//cout << "Player " << players[i]->getColor() << " has " << players[i]->getElektro() << " elektros." << endl;
		cout << "test" << endl;
	}
	cout << endl;
}