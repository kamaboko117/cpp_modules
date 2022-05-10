/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:52:18 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/10 16:20:48 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void	iter(T *tab, size_t size, void (*fnct)(T &)){
	for (size_t i = 0; i < size; i++)
		fnct(tab[i]);
}

#endif