#pragma once
#include "containerStruct.hpp"

class RandomDeleter
{
public:
	void randomDel(Container& container); //removes a random number of items in containers
private:
	int maxDel(int length); //calculates the maximum number of items to remove
};