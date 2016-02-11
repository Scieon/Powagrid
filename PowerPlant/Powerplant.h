#pragma once
#include <string>
using namespace std;
class Powerplant
{
public:
	Powerplant(int minimumBid, string resourceType, int nbOfResources, int nbOfCitiesPowered);
	~Powerplant();

	int get_min_bid();
	string get_resource_type();
	int get_resources_required();
	int get_nb_cities_powered();


private:
	int min_bid;
	string resource_type;
	int resources_required;
	int nb_cities_powered;


};

