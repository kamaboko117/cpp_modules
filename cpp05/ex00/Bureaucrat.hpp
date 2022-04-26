/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:27:47 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 12:00:46 by asaboure         ###   ########.fr       */
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

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw(){
			return ("Grade must be lower than 150");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw(){
			return ("Grade must be higher than 0");
		}
	};

	std::string	getName();
	int			getGrade();
	void		upgrade();
	void		downgrade();
};

#endif