/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:42:22 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/13 14:57:46 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack();														//CANON
	MutantStack(const MutantStack &src);								//CANON
	~MutantStack();														//CANON

	MutantStack	&operator=(const MutantStack &rhs);						//CANON
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin();
	iterator	end();
};

template<typename T>
MutantStack<T>::MutantStack(){}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src){
	*this = src;
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &rhs){
	this->c = rhs.c;
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(){
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(){
	return (this->c.end());
}

#endif