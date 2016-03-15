#pragma once
#include "AbstractObserver.h"

class ConcreteObserver : public AbstractObserver {

	ConcreteObserver();
	~ConcreteObserver();

	void update(int val);
};