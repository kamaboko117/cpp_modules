/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:21:58 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/04 14:34:32 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <string>

typedef unsigned long uintptr_t;

typedef struct	s_data{
	int			cm;
	std::string	color;
}				Data;

#endif