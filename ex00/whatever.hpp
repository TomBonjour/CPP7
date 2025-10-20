/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:11:12 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/20 14:30:17 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "string"

template <typename T> 
const T   max(const T &x, const T &y)
{
    return (x > y ? x : y);
}

template <typename T> 
const T   min(const T &x, const T &y)
{
    return (x < y ? x : y);
}

template <typename T> 
void   swap(T &x, T &y)
{
    T   tmp = x;
    x = y;
    y = tmp;
}


