#include "OfficeBuilding.h"

OfficeBuilding::OfficeBuilding(unsigned int _buildingNumber, unsigned int _floors, unsigned int _numberOfEmployees, double _averageDailyTurnover, unsigned int _numberOfDepartments)
	:CommercialBuilding(_buildingNumber, _floors, _numberOfEmployees, _averageDailyTurnover),
	numberOfDepartments(_numberOfDepartments) {};


void OfficeBuilding::info() {
	std::cout << "Kancelaria -> ";
	std::cout << "poradove cislo: " << buildingNumber << " | poschodia: " << floors;
	std::cout << " | poceet zamestnancov: " << numberOfEmployees << " | denny zisk: " << averageDailyTurnover;
	std::cout << " | pocet oddeleni: " << numberOfDepartments << std::endl;
}