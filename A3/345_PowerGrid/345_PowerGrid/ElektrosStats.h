#pragma once
#include "StatsDecorator.h"

class ElektrosStats : public StatsDecorator {

public:
	ElektrosStats();
	ElektrosStats(Statistics * decoratedStatistics, Board * board);
	ElektrosStats(Statistics * decoratedStatistics);
	void update();
	void printStatistics();

};