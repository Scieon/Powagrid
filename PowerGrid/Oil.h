#ifndef OIL_H
#define OIL_H
#include "Resource.h"

class Oil : public Resource {
public:
	Oil();
	 int getCost() const;
	void setCost(int cost);

private:
	int cost;

};

#endif