#include "Powerplant.h"



Powerplant::Powerplant(int minimumBid, string resourceType, int nbOfResources, int nbOfCitiesPowered)
{
	min_bid = minimumBid;
	resource_type = resourceType;
	resources_required = nbOfResources;
	nb_cities_powered = nbOfCitiesPowered;
}


Powerplant::~Powerplant()
{
}


int Powerplant::get_min_bid() 
{
	return min_bid;
}


string Powerplant::get_resource_type()
{
	return resource_type;
}


int Powerplant::get_resources_required()
{
	return resources_required;
}


int Powerplant::get_nb_cities_powered()
{
	return nb_cities_powered;
}