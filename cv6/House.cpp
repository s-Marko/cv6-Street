#include "House.h"
#include <iostream>

House::House(unsigned int _buildingNumber, unsigned int _floors, double _houseDimensions, double _gardenDimensions)
	:ResidentialBuilding(_buildingNumber, _floors),
	houseDimensions(_houseDimensions),
	gardenDimensions(_gardenDimensions) {};

void House::info() {
	std::cout << "Rodinny dom - > ";
	std::cout << "poradove cislo: " << buildingNumber << " | poschodia: " << floors;
	std::cout << " | Rozmery domu: " << houseDimensions << " | Rozmery zahrady: " << gardenDimensions << std::endl;
}
