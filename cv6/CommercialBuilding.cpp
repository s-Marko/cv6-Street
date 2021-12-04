#include "CommercialBuilding.h"

CommercialBuilding::CommercialBuilding(unsigned int _buildingNumber, unsigned int _floors, unsigned int _numberOfEmployees, double averageDailyTurnover)
	:Building(_buildingNumber, _floors),
	numberOfEmployees(_numberOfEmployees),
	averageDailyTurnover(averageDailyTurnover) {};
