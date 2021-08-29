#include "randomDeleter.hpp"
#include <cstdlib>

void RandomDeleter::randomDel(Container& container)
{
	for (int i = 0; i < maxDel(container.iVector.size()); ++i)
	{
		container.iVector.pop_back();
		container.iMap.erase(i);
	}
}

int RandomDeleter::maxDel(int length)
{
	int maxD = 1 + rand() % length;
	return maxD > 15 ? 15 : maxD;
}