#pragma once
#include "CommercialBuilding.h"


class FactoryBuilding : public CommercialBuilding {
	private:
		double factoryHallDimensions;
	public:
		FactoryBuilding(unsigned int _buildingNumber, unsigned int _floors, unsigned int _numberOfEmployees, double _averageDailyTurnover, unsigned int _factoryHallDimensions);
		double getFactoryHallDimensions() { return factoryHallDimensions; }
		void setFactoryHallDimensions(double _factoryHallDimensions) { factoryHallDimensions = _factoryHallDimensions; }
		virtual void info();
};