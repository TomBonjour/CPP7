/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:29:52 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/20 15:08:07 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void    iter(T *tab, const int len, void f(const T &elem))
{
    for (int i = 0; i < len; i++)
        f(tab[i]);
}

template <typename T>
void    display(const T &elem)
{
    std::cout << elem << std::endl;
}