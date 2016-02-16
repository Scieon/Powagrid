#include "Resource.h"
#ifndef OIL_H
#define OIL_H


class Oil : public Resource {
public:
	 Oil::Oil();
	 int getCost() const;
	 void setCost(int cost);

private:
	int cost;

};

#endif