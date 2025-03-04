#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	
	try
	{
		// Constructor vacio

		Array<int>	empty;
        
		std::cout << std::endl << "Empty array" << std::endl << std::endl;
		for (unsigned int i = 0; i < empty.size(); i++)
		{
			if (!i)
            	std::cout << empty[i];
			else
            	std::cout << " " << empty[i];
		}

		// Constructor con numero

		Array<int>	five(5);
		
		for (unsigned int i = 0; i < five.size(); i++)
			five[i] = i * 5;
        
		std::cout << std::endl << std::endl << "Normal array" << std::endl << std::endl;
		for (unsigned int i = 0; i < five.size(); i++)
		{
			if (!i)
            	std::cout << five[i];
			else
            	std::cout << " " << five[i];
		}

		// Constructor copia

		Array<int>	copy(five);
        
		std::cout << std::endl << std::endl << "Copy array" << std::endl << std::endl;
		for (unsigned int i = 0; i < copy.size(); i++)
		{
			if (!i)
            	std::cout << copy[i];
			else
            	std::cout << " " << copy[i];
		}

		// Constructor asignacion

		Array<int>	assign(five);
        
		std::cout << std::endl << std::endl << "Assigned array" << std::endl << std::endl;
		for (unsigned int i = 0; i < assign.size(); i++)
		{
			if (!i)
            	std::cout << assign[i];
			else
            	std::cout << " " << assign[i];
		}

		// Modificar original para ver que los valores no se modifican

		for (unsigned int i = 0; i < five.size(); i++)
			five[i] = i * 2;
        
		std::cout << std::endl << std::endl << "Modified array" << std::endl << std::endl;
		for (unsigned int i = 0; i < five.size(); i++)
		{
			if (!i)
            	std::cout << five[i];
			else
            	std::cout << " " << five[i];
		}

		// Constructor copia

		std::cout << std::endl << std::endl << "Copy array" << std::endl << std::endl;
		for (unsigned int i = 0; i < copy.size(); i++)
		{
			if (!i)
            	std::cout << copy[i];
			else
            	std::cout << " " << copy[i];
		}

		// Constructor asignacion

		std::cout << std::endl << std::endl << "Assigned array" << std::endl << std::endl;
		for (unsigned int i = 0; i < assign.size(); i++)
		{
			if (!i)
            	std::cout << assign[i];
			else
            	std::cout << " " << assign[i];
		}
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	// Out of range

	try
	{
		Array<int>	range(4);

		for (unsigned int i = 0; i < range.size(); i++)
			range[i] = i * 8;

		std::cout << std::endl << std::endl;
		std::cout << "Out of range test, size: " << range.size();
		std::cout << std::endl << std::endl;
		for (unsigned int i = 0; i < range.size() + 5; i++)
		{
			std::cout << "Index: " << i << ": ";
			std::cout << range[i] << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

    return 0;
}
