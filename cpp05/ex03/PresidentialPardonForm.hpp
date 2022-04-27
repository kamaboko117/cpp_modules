/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:18:12 by asaboure          #+#    #+#             */
/*   Updated: 2022/04/27 13:19:51 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();										//Canonical
	
	std::string		_target;	
	virtual void	doExec() const;
	
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);		//Canonical
	~PresidentialPardonForm();										//Canonical

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);//Canonical
};

#endif