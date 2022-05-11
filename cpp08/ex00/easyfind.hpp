/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:27:34 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/11 13:01:36 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iterator>
# include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &container, int tofind){
	return (std::find(container.begin(), container.end(), tofind));
}

#endif 