#pragma once
#include "Observer.h"
#include <vector>
#include <list>
#include <string>

using namespace std;

class Subject {
public:
	Subject();
	~Subject();
	virtual void attach(Observer * observer);
	virtual void detach(Observer * observer);
	virtual void notify() = 0;

protected:
	list<Observer *> * observers;


};