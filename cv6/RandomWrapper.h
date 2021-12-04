#pragma once

#include <random>

class RandomWrapper {
	private:
		std::random_device rd;
		std::mt19937 mt;
	RandomWrapper()
};