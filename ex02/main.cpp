/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:39:59 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/21 20:51:15 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
#include <ctime>
#include <cstdlib>

int main(void)
{
    std::cout << "--------DEFAULT CONSTRUCTOR--------" << std::endl;
	{
		Array<char> tab;
		std::cout << "Size tab char : " << tab.size() << std::endl;
	}
	{
		Array<double> tab;
		std::cout << "Size tab double : " << tab.size() << std::endl;
	}
	{
		Array<std::string> tab;
		std::cout << "Size tab string : " << tab.size() << std::endl;
	}
	{
		Array< Array<int> > tab;
		std::cout << "Size tab int : " << tab.size() << std::endl;
	}
    std::cout << std::endl << std::endl;

    std::cout << "--------OVERLOAD CONSTRUCTOR--------" << std::endl;
	unsigned int n = 5;
	{
		Array<char> tab(n);
		std::cout << "Size tab char : " << tab.size() << std::endl;
		std::cout << "Values : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<int> tab(n);
		std::cout << "Size tab int : " << tab.size() << std::endl;
		std::cout << "Values : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<float> tab(n);
		std::cout << "Size tab float : " << tab.size() << std::endl;
		std::cout << "Values : ";
        for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<double> tab(n);
		std::cout << "Size tab double : " << tab.size() << std::endl;
		std::cout << "Values : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<std::string> tab(n);
		std::cout << "Size tab string : " << tab.size() << std::endl;
		std::cout << "Values : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl << std::endl;
	}

	std::cout << "--------COPY CONSTRUCTOR--------" << std::endl;
	n = 2;
	{
		Array<char> tab(n);
		tab[0] = 'A';
		tab[1] = 'B';
		Array<char> tabCopy(tab);
		tabCopy[1] = 'C';
		std::cout << "Values tabChar : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
		std::cout << "Values Copy : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tabCopy[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<double> tab(n);
		tab[0] = 4.2;
		tab[1] = 0.42;
		Array<double> tabCopy(tab);
		tabCopy[1] = 0.43;
		std::cout << "Values tabDouble : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
		std::cout << "Values Copy : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tabCopy[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<std::string> tab(n);
		tab[0] = "Hello";
		tab[1] = "World";
		Array<std::string> tabCopy(tab);
		tabCopy[1] += " !";
		std::cout << "Values tabString : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
		std::cout << "Values Copy : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tabCopy[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<int> tab(n);
		tab[0] = 4;
		tab[1] = 2;
		Array<int> tabCopy(tab);
		tabCopy[1] = 3;
		std::cout << "Values tabInt : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
		std::cout << "Values Copy : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tabCopy[i] << " ";
		std::cout << std::endl << std::endl;
	}

	std::cout << "--------ASSIGNMENT OPERATOR--------" << std::endl;
	{
		Array<char> tab(n);
		tab[0] = 'A';
		tab[1] = 'B';
		Array<char> tabCopy;
		tabCopy = tab;
		tabCopy[1] = 'C';
		std::cout << "Values tab Char : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
		std::cout << "Values Copy : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tabCopy[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<double> tab(n);
		tab[0] = 4.2;
		tab[1] = 0.42;
		Array<double> tabCopy;
		tabCopy = tab;
		tabCopy[1] = 0.43;
		std::cout << "Values tab Double : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
		std::cout << "Values Copy : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tabCopy[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<std::string> tab(n);
		tab[0] = "Hello";
		tab[1] = "World";
		Array<std::string> tabCopy;
		tabCopy = tab;
		tabCopy[1] += " !";
		std::cout << "Values tab String : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
		std::cout << "Values Copy : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tabCopy[i] << " ";
		std::cout << std::endl;
	}
	{
		Array<int> tab(n);
		Array<int> tabCopy;
		tabCopy = tab;
		tabCopy[0] = 4;
		tabCopy[1] = 2;
		std::cout << "Values : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
		std::cout << "Values Copy : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tabCopy[i] << " ";
		std::cout << std::endl << std::endl;
	}

	std::cout << "--------OUT OF BOUND INDEX EXCEPTIONS--------" << std::endl;
	{
		Array<char> tab;
		try {
			std::cout << "Value: " << tab[0] << std::endl;
		}
		catch (const std::exception& err) {
			std::cout << "Test : Tab[0] on empty tab --> " << err.what() << std::endl;
		}
	}
	{
		Array<std::string> tab(10);
		try {
			std::cout << "Value: " << tab[11] << std::endl;
		}
		catch (const std::exception& err) {
			std::cout << "Test : Tab[11] on tab of ten --> " << err.what() << std::endl << std::endl;
		}
	}

	std::cout << "--------SUBJECT TEST--------" << std::endl;
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
		return 0;
	}
}