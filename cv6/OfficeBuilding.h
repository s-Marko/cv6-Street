#pragma once
#include "CommercialBuilding.h"


class OfficeBuilding : public CommercialBuilding {
	private:
		unsigned int numberOfDepartments;
	public:
		OfficeBuilding(unsigned int _buildingNumber, unsigned int _floors, unsigned int _numberOfEmployees, double _averageDailyTurnover, unsigned int _numberOfDepartments);
		unsigned int getNumberOfDepartments() { return numberOfDepartments; }
		void setNumberOfDepartments(double _numberOfDepartments) { numberOfDepartments = _numberOfDepartments; }
		virtual void info();
};