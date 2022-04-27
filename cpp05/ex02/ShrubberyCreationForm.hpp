/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:01:48 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 12:06:36 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();										//Canonical
	
	std::string		_target;	
	virtual void	doExec() const;
	
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);		//Canonical
	~ShrubberyCreationForm();										//Canonical

	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);//Canonical
};

#endif