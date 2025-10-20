/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:29:56 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/20 15:08:06 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    char            tab1[3] = {'a', 'b', 'c'};
    int             tab2[4] = {1, 2, 3, 4};
    double          tab3[4] = {1.05, 2.05, 3.05, 4.05};
    std::string     tab4[5] = {"c'est", "sympa", "le", "cpp", "!!!"};

    std::cout << "-------DISPLAY--------" << std::endl;
    iter<char>(tab1, 3, display);
    iter<int>(tab2, 4, display);
    iter<double>(tab3, 4, display);
    iter<std::string>(tab4, 5, display);
    std::cout << std::endl << std::endl;
}