#include "Street.h"
#include "House.h"
#include "ResidentialBuilding.h"
#include "ApartmentComplex.h"
#include "OfficeBuilding.h"
#include "FactoryBuilding.h"

#include <iostream>
#include <random>

void Street::generate(unsigned int numberOfBuildings)
{
	int house;
	int apartment;
	int office;
	int factory;


	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1, 4);
	std::uniform_int_distribution<int> floor(1, 6);
	std::uniform_int_distribution<int> employee(3, 25);
	std::uniform_int_distribution<int> turn(10, 400);

	street.reserve(numberOfBuildings);

	for (int i = 0; i < numberOfBuildings; i++) {
		int r = dist(mt);
		int floors = floor(mt);
		int employees = employee(mt);
		int turnover = turn(mt);
		if (r == 1) {
			// factory
			street.push_back(new FactoryBuilding(i, floors, employees, turnover, (employees+floors)*1.5));
		}
		else if (r == 2) {
			// office
			street.push_back(new OfficeBuilding(i, floors, employees, turnover, floors * 2));
		}
		else if (r == 3) {
			// apartment
			street.push_back(new ApartmentComplex(i, floors, floors * 4));
		}
		else {
			// house
			street.push_back(new House(i, floors, floors*2, floors*1.5));
		}
	}
}


Street::Street(unsigned int numberOfBuildings)
{
	generate(numberOfBuildings);
}
