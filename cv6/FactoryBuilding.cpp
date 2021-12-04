#include "FactoryBuilding.h"

FactoryBuilding::FactoryBuilding(unsigned int _buildingNumber, unsigned int _floors, unsigned int _numberOfEmployees, double _averageDailyTurnover, unsigned int _factoryHallDimensions)
	:CommercialBuilding(_buildingNumber, _floors, _numberOfEmployees, _averageDailyTurnover),
	factoryHallDimensions(_factoryHallDimensions) {};

void FactoryBuilding::info() {
	std::cout << "Fabrika -> ";
	std::cout << "poradove cislo: " << buildingNumber << " | poschodia: " << floors;
	std::cout << " | poceet zamestnancov: " << numberOfEmployees << " | denny zisk: " << averageDailyTurnover;
	std::cout << " | rozmery: " << factoryHallDimensions << std::endl;
}