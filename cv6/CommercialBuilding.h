#pragma once
#include "Building.h"

class CommercialBuilding : public Building {
	protected:
		unsigned int numberOfEmployees;
		double averageDailyTurnover;
	public:
		CommercialBuilding(unsigned int _buildingNumber, unsigned int _floors, unsigned int _numberOfEmployees, double averageDailyTurnover);
		unsigned int getNumberOfEmployees() { return numberOfEmployees; }
		double getAverageDailyTurnover() { return averageDailyTurnover; }
		void setNumberOfEmployees(unsigned int _numberOfEmployees) { numberOfEmployees = _numberOfEmployees; }
		void setAverageDailyTurnover(double _averageDailyTurnover) { averageDailyTurnover = _averageDailyTurnover; }
};