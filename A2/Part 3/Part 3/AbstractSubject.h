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
	virtual void attach(AbstractObserver * observer); //Add observer to list
	virtual void detach(AbstractObserver * observer); //Remove observer from list
	virtual void notify(string resource, int quantity); //Notify observers

protected:
	//Keep track of all observers
	list<AbstractObserver *> * observers;

};