/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:27:47 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 15:24:07 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	Bureaucrat();													//Canonical

	std::string	const	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);						
	Bureaucrat(Bureaucrat const &src);								//Canonical
	~Bureaucrat();													//Canonical

	Bureaucrat	&operator=(Bureaucrat const &rhs);					//Canonical

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	std::string	getName() const;
	int			getGrade() const;
	void		upgrade();
	void		downgrade();
	void		signForm(Form);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif