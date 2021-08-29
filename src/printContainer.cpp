#include "printContainer.hpp"

void PrintContainer::print(const Container& container)
{
	std::cout << "\nVector:\t";
	for (auto el : container.iVector)
	{
		std::cout << el << '\t';
	}
	std::cout << "\nMap:\t";
	for (auto el : container.iMap)
	{
		std::cout << el.second << '\t';
	}
	std::cout << std::endl;
}


