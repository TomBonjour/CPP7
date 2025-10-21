/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:39:59 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/21 14:21:14 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

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
	const unsigned int n = 5;
	{
		Array<char> tab(n);
		std::cout << "Size tab char : " << tab.size() << std::endl;
		std::cout << "Values : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab.getArrayLine(i) << " ";
		std::cout << std::endl;
	}
	{
		Array<double> tab(n);
		std::cout << "Size tab double : " << tab.size() << std::endl;
		std::cout << "Values : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab.getArrayLine(i) << " ";
		std::cout << std::endl;
	}
	{
		Array<std::string> tab(n);
		std::cout << "Size tab string : " << tab.size() << std::endl;
		std::cout << "Values : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab.getArrayLine(i) << " ";
		std::cout << std::endl;
	}
	{
		Array<int> tab(n);
		std::cout << "Size tab int : " << tab.size() << std::endl;
		std::cout << "Values : ";
		for (unsigned int i = 0; i < n; ++i)
			std::cout << tab.getArrayLine(i) << " ";
		std::cout << std::endl;
	}
	{
		Array<float> tab(n);
		std::cout << "Size tab float : " << tab.size() << std::endl;
		std::cout << "Values : ";
        for (unsigned int i = 0; i < n; ++i)
			std::cout << tab.getArrayLine(i) << " ";
		std::cout << std::endl;
	}
}