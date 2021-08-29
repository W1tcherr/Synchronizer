#pragma once
#include <cstdlib>
#include <vector>
#include <map>

struct Container
{
    Container(const unsigned int& length)
    {
        iVector.resize(length);
	    for (unsigned int i = 0; i < length; ++i)
	    {
		    iVector[i] = 1 + rand() % 9;
		    iMap.emplace(i, 1 + rand() % 9);
	    }
    }

    std::vector<int> iVector;
	std::map<int, int> iMap;
};