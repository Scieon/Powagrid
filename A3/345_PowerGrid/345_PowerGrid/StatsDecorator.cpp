#include "StatsDecorator.h"
#include <iostream>

using namespace std;

StatsDecorator::StatsDecorator() {

}

StatsDecorator::StatsDecorator(Statistics * decoratedStatistics, Board * board) : Statistics(board)  {

	this->decoratedStatistics = decoratedStatistics;

}

StatsDecorator::StatsDecorator(Statistics * stats){
	
	this->decoratedStatistics = stats;

}

StatsDecorator::~StatsDecorator() {
	
}

void StatsDecorator::update() {

	cout << "ELEKTROS" << endl;

	("pause");

}