/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:34:04 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 18:35:25 by asaboure         ###   ########.fr       */
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

	Form	*makeForm(std::string name, std::string target) const;
};

#endif