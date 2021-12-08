/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:30:31 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/07 17:21:59 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
private:
	std::string	_first_name = "";
	std::string	_last_name = "";
	std::string	_nickname = "";
	std::string	_phone_number = "";
	std::string	_darkest_secret = "";
public:
	Contact();
	~Contact();

	void				setFirstName(const std::string first_name);
	void				setLastName(const std::string last_name);
	void				setNickname(const std::string nickname);
	void				setPhoneNumber(const std::string phone_number);
	void				setDarkestSecret(const std::string darkest_secret);
	const std::string	getFirstName();
	const std::string	getLastName();
	const std::string	getNickname();
	const std::string	getPhoneNumber();
	const std::string	getDarkestSecret();
};

#endif