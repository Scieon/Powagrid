#pragma once
#include "ResourceMarketView.h"
#include <vector>
#include <list>

using namespace std;

class AbstractSubject {

public:
	AbstractSubject();
	~AbstractSubject();
	virtual void attach(ResourceMarketView * observer) = 0;
	virtual void detach(ResourceMarketView * observer) = 0;
	virtual void notify() = 0;

protected:
	//Keep track of all observers
	list<ResourceMarketView *> * observers;

};