/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:40:28 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/21 17:28:57 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    _n = 0;
    _array = NULL;
}
template <typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
    if (n == 0)
        this->_array = NULL;
    _array = new T[_n];
    // for (unsigned int i = 0; i < n; i++)
    // {
    //     _array[i] = NULL;
    // }
}
template <typename T>
Array<T>::~Array()
{
    if (this->_array)
        delete [] this->_array;
}
template <typename T>
Array<T>::Array(const Array & src)
{
    this->_array = NULL;
    *this = src;
}

template <typename T>
Array<T>&  Array<T>::operator=(const Array & src)
{
    if (this->_array != NULL)
        delete this->_array;
    this->_n = src.size();
    this->_array = new T[src.size()];
    for (unsigned int i = 0; i < src.size(); i++)
    {
        _array[i] = src._array[i];
    }
    return (*this);
}

template <typename T>
T&      Array<T>::operator[](unsigned int i) const
{
    if (i >= this->size())
        throw (Array<T>::OutOfBoundsIndexException());   
    return (this->_array[i]);
}


template <typename T>
unsigned int    Array<T>::size() const
{
    if (!this->_array)
        return (0);
    else
        return (this->_n);
}

template <typename T>
const char* Array<T>::OutOfBoundsIndexException::what() const throw()
{
    return ("Error : Index out of bounds");
}