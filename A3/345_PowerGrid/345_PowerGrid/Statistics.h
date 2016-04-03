#pragma once
#include "Observer.h"

//Abstract Class
class Statistics : public Observer {

public:
	virtual void printStatistics() = 0;

};