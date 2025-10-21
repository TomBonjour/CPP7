/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:40:31 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/21 20:51:25 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <string>


template <typename T>
class Array
{
    public:
    
    Array();
    Array(unsigned int n);
    Array(const Array & src);
    ~Array();
    
    Array&  operator=(const Array & src);
    T&      operator[](unsigned int i) const;

    unsigned int    size() const;
    
    class OutOfBoundsIndexException : public std::exception
    {
        public: virtual const char* what() const throw();
    };

    private:
    
    T               *_array;
    unsigned int    _n;
};

#include "Array.tpp"