#pragma once
#include "ResidentialBuilding.h"


class House : public ResidentialBuilding {
	private:
		double houseDimensions;
		double gardenDimensions;
	public:
		House(unsigned int _houseNumber, unsigned int _floors, double _houseDimensions, double _gardenDimensions);
		double getHouseDimensions() { return houseDimensions; }
		double getGardenDimensions() { return gardenDimensions; }
		void setHouseDimensions(double _houseDimensions) { houseDimensions = _houseDimensions; }
		void setGardenDimensions(double _gardenDimensions) { gardenDimensions = _gardenDimensions; }
		virtual void info();
};