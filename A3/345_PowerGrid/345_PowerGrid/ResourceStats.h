#pragma once
#include "StatsDecorator.h"

class ResourceStats : public StatsDecorator {

public:
	ResourceStats();
	ResourceStats(Statistics * decoratedStatistics);
	void update();
	void printStatistics();
};