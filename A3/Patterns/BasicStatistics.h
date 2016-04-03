#pragma once

#include "Statistics.h"
#include "Board.h"

class BasicStatistics : public Statistics {

public:
	BasicStatistics();
	BasicStatistics(Board * board);
	~BasicStatistics();
	void update();
	void printStatistics();

private:
	//Board * subject;
	
};