/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:36:44 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/04 17:42:07 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template<typename T>
void	swap(T &a, T &b){
	T tmp;
	
	tmp = a;
	a = b;
	b = tmp;	
}

template<typename T>
T	&min(T &a, T &b){
	if (a < b)
		return a;
	return b;
}

template<typename T>
T	&max(T &a, T &b){
	if (a > b)
		return a;
	return b;
}

#endif