/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:27:47 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/14 15:35:03 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>

class Bureaucrat
{
private:
	std::string	const	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);						//Canonical
	Bureaucrat(Bureaucrat const &src);								//Canonical
	~Bureaucrat();													//Canonical

	Bureaucrat	&operator=(Bureaucrat const &rhs);					//Canonical

	std::string	getName();
	int			getGrade();
	void		upgrade();
	void		downgrade();
};

#endif