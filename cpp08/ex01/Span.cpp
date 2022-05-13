/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:48:55 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/13 12:10:41 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span(unsigned int n){
	this->_len = n;
	this->_span = std::vector<int>();
}

Span::Span(const Span &src){
	this->_len = src._len;
	this->_span.clear();
	this->_span = src._span;
}

Span::~Span(){}

Span	&Span::operator=(Span &rhs){
	this->_len = rhs._len;
	this->_span.clear();
	this->_span = rhs._span;
	return (*this);
}

void	Span::addNumber(int n){
	if (this->_span.size() < this->_len)
		this->_span.push_back(n);
	else
		throw std::overflow_error("span out of bounds");
}

void Span::addNumber(std::vector<int>::const_iterator t1,
	std::vector<int>::const_iterator t2)
{
	while (t1 < t2)
	{
		if (_span.size() == _len)
			throw std::overflow_error("span out of bounds");
		_span.push_back(*t1);
		t1++;
	}
}

int	Span::shortestSpan(){
	std::vector<int>::const_iterator t1;
	
	if (this->_span.size() < 2)
		throw std::range_error("Not enough elements in Span");
	std::sort(_span.begin(), _span.end());
	t1 = _span.begin();
	t1++;
	int r = std::abs(*t1 - *(t1 - 1));
    while (++t1 < _span.end()){
        if(std::abs(*t1 - *(t1 - 1)) < r)
            r = std::abs(*t1 - *(t1 - 1));
	}
	return (r);
}

int	Span::longestSpan() const{
	if (this->_span.size() < 2)
		throw std::range_error("Not enough elements in Span");
	return (std::abs(*std::max_element(_span.begin(), _span.end())
			- *std::min_element(_span.begin(), _span.end())));
}