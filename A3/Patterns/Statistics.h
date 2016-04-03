#pragma once
#include "Observer.h"
#include "Board.h"

//Abstract Class
class Statistics : public Observer {

public:
	virtual void printStatistics() = 0;
	Statistics(Board * board);
	Statistics();
	~Statistics();



public:
	Board * subject;

};