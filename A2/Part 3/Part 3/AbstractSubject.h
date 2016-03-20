#pragma once
#include "AbstractObserver.h"
#include <vector>
#include <list>
#include <string>

using namespace std;

class AbstractSubject {

public:
	AbstractSubject();
	~AbstractSubject();
	virtual void attach(AbstractObserver * observer);
	virtual void detach(AbstractObserver * observer);
	virtual void notify(string resource, int quantity);

protected:
	//Keep track of all observers
	list<AbstractObserver *> * observers;

};