#ifndef COAL_H
#define COAL_H


class Coal {

public:
	Coal();
	Coal(int cost);
	int getCost() const;
	void setCost(int cost);

private:
	int cost;
};


#endif