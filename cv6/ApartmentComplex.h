#pragma once

#include "ResidentialBuilding.h"


class ApartmentComplex : public ResidentialBuilding {
	private:
		unsigned int numberOfApartments;
	public:
		ApartmentComplex(unsigned int _buildingNumber, unsigned int _floors, unsigned int _numberOfApartments);
		virtual void info();
};