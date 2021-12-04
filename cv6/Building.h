#pragma once
#include <iostream>

class Building {
	protected:
		unsigned int buildingNumber;
		unsigned int floors;
	public:
		//virtual ~Building() = 0;
		Building() {};
		Building(unsigned int _buildingNumber, unsigned int _floors)
			:buildingNumber(_buildingNumber),
			floors(_floors) {};
		virtual void info() = 0;
		unsigned int getBuildingNumber() { return buildingNumber; }
		unsigned int getFloors() { return floors; }
		void setHouseDimensions(unsigned int _buildingNumber) { buildingNumber = _buildingNumber; }
		void setGardenDimensions(unsigned int _floors) { floors = _floors; }
};