#ifndef RESOURCE_H
#define RESOURCE_H
#include <iostream>

using namespace std;

class Resource {

public:

	virtual ~Resource();
	Resource();
	virtual int getCost() const = 0;
	virtual void setCost(int cost) = 0;


private:
	//int cost;
};


#endif