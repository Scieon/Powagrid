#pragma once
#include "Statistics.h"


class StatsDecorator : public Statistics {

public:
	StatsDecorator();
	StatsDecorator(Statistics * decoratedStatistics, Board * board); //Wrap Statistics object inside an object of one of the decorated statistic classes
	StatsDecorator(Statistics * decoratedStatistics);
	~StatsDecorator();

	void update();
	//void printStatistics();


	

protected:
	Statistics * decoratedStatistics;
};