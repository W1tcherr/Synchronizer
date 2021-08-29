#include "synchronizator.hpp"
#include <algorithm>

void Synchronizator::synchronize(Container& container)
{
    auto result1 = remove_if(container.iVector.begin(),container.iVector.end(),[&](const int& a){for(auto el : container.iMap)
                                                                                                        if(a==el.second)
                                                                                                            return false;
                                                                                                        return true;});
    container.iVector.erase(result1,container.iVector.end());

    auto itMap = container.iMap.begin();
    while (itMap != container.iMap.end())
    {
        if (std::find(container.iVector.begin(), container.iVector.end(), itMap->second) == container.iVector.end())
        {
            itMap = container.iMap.erase(itMap);
        }
        else
        {
            ++itMap;
        }
    }
}