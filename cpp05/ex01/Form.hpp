/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:07:20 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/26 15:39:45 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	Form();															//Canonical
	
	std::string	const	_name;
	bool				_signed;
	int const			_signGrade;
	int const			_execGrade;
	
public:
	Form(std::string name, int, int);
	Form(Form const &src);											//Canonical
	~Form();														//Canonical

	Form	&operator=(Form const &rhs);							//Canonical

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
	class FormAlreadySignedException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	std::string	getName() const;
	bool		isSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	void	beSigned(const Bureaucrat&);
};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif