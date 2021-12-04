#pragma once
#include <vector>
#include "Building.h"

class Street {
	private:
		std::vector<Building*> street;
		void generate(unsigned int numberOfBuildings);
		Building* generateHouse(int id);
		Building* generateApartment(int id);
		Building* generateOffice(int id);
		Building* generateFactory(int id);
	public:
		Street(unsigned int numberOfBuildings);
		~Street() {};
		std::vector<Building*>& getStreet() { return street; };
};