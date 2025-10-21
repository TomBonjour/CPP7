/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:40:31 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/21 14:21:15 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


template <typename T>
class Array
{
    public:
    
    Array();
    Array(unsigned int n);
    Array(const Array & src);
    ~Array();
    
    Array&  operator=(const Array & src);

    T       &getArrayLine(int i);
    
    unsigned int    size() const;
    
    private:
    
    T               *_array;
    unsigned int    _n;
};

#include "Array.tpp"