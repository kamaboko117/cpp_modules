/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:41:41 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 12:44:12 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();											//Canonical
	
	std::string		_target;	
	virtual void	doExec() const;
	
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);			//Canonical
	~RobotomyRequestForm();											//Canonical

	RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);	//Canonical
};

#endif