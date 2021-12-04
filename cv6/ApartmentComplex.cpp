#include "ApartmentComplex.h"

ApartmentComplex::ApartmentComplex(unsigned int _buildingNumber, unsigned int _floors, unsigned int _numberOfApartments)
:ResidentialBuilding(_buildingNumber, _floors),
numberOfApartments(_numberOfApartments) {}


void ApartmentComplex::info() {
	std::cout << "Bytovka -> ";
	std::cout << "poradove cislo: " << buildingNumber << " | poschodia: " << floors;
	std::cout << " | Pocet Bytov: " << numberOfApartments << std::endl;
}

