/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:34:04 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 14:27:33 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"

class Intern
{
private:
	Form	*makeShrub(const std::string) const;
	Form	*makeRobotomy(const std::string) const;
	Form	*makePardon(const std::string) const;
	
public:
	Intern();															//CANON
	Intern(Intern const&);												//CANON
	~Intern();															//CANON

	Intern	&operator=(Intern const&);									//CANON

	class	FormNotFoundException : public std::exception{
	public:
		virtual const char	*what() const throw();
	};

	Form	*makeForm(std::string name, std::string target) const;
};

#endif