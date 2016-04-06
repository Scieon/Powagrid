#include "ElektrosStats.h"
#include "BasicStatistics.h"
#include <iostream>

using namespace std;

ElektrosStats::ElektrosStats() {

}

ElektrosStats::ElektrosStats(Statistics * decoratedStatistics, Board * board) : StatsDecorator(decoratedStatistics, board) {

}

ElektrosStats::ElektrosStats(Statistics * decoratedStatistics) : StatsDecorator(decoratedStatistics) {
	subject = decoratedStatistics->subject;
	subject->detach(decoratedStatistics);
	subject->attach(this);

}

void ElektrosStats::update() {
	//decoratedStatistics->printStatistics();
	
	cout << "------------------- Displaying Advanced Statistics 1 -------------------\n\n";
	this->printStatistics();

	//system("pause");

}

void ElektrosStats::printStatistics() {

	decoratedStatistics->printStatistics();
	vector<Player*> players = subject->vector_player;
	for (int i = 0; i < subject->getNumberOfPlayers(); i++) {	
		cout << "Player " << players[i]->getColor() << " has " << players[i]->getElektro() << " elektros." << endl;
	}
	cout << endl;

}