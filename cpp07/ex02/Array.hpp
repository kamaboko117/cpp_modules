/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:28:41 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/10 18:55:57 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array
{
private:
	T 	*_tab;
	int	_size;
public:
	Array();															//CANON
	Array(Array &src);													//CANON
	Array(unsigned int n);
	~Array();															//CANON

	Array	&operator=(Array &rhs);										//CANON
	T		&operator[](const int i);
};

//CANON

template<typename T>
Array<T>::Array(){
	_size = 0;
};

template<typename T>
Array<T>::Array(unsigned int n){
	_size = n;	
	this->_tab = new T[n];
}

template<typename T>
Array<T>::Array(Array &src){
	*this = src;
}

template<typename T>
Array<T>::~Array(){
	if (this->_size > 0)
		delete [] this->_tab;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array &rhs){
	if (this == &rhs)
		return *this;
	if (this->_size > 0)
		delete [] this->_array;
	this->_size = rhs.size();
	this->_array = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = rhs[i];
	return *this;
}

//OPERATORS

template<typename T>
T	&Array<T>::operator[](const int i){
	if (i >= this->_size || i < 0)
		throw std::overflow_error("Index out of bounds");
	return this->_array[i];
}

#endif