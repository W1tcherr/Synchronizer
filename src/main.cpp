#include <iostream>
#include <ctime>
#include "containerStruct.hpp"
#include "printContainer.hpp"
#include "randomDeleter.hpp"
#include "synchronizator.hpp"

unsigned int getValue();

int main()
{
	std::srand(std::time(nullptr));

	unsigned int length = getValue();
	Container ContainersObject(length);
	PrintContainer printCon;
	RandomDeleter randDel;
	Synchronizator Sync;
	printCon.print(ContainersObject);
	randDel.randomDel(ContainersObject);
	printCon.print(ContainersObject);
	Sync.synchronize(ContainersObject);
	printCon.print(ContainersObject);
	return 0;
}

unsigned int getValue()
{
	while(true)
	{
		std::cout << "Enter the size of the containers: ";
		unsigned int value;
		std::cin >> value;
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\nWrong size, please re-enter.\n";
		}
		else
		{
			return value;
		}
	}
}