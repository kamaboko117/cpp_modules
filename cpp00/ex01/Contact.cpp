/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:05:24 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/07 17:22:11 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

//***SETTERS****//
void	Contact::setFirstName(const std::string first_name){
	this->_first_name = first_name;
}

void	Contact::setLastName(const std::string last_name){
	this->_last_name = last_name;
}

void	Contact::setNickname(const std::string nickname){
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string phone_number){
	this->_phone_number = phone_number;
}

void	Contact::setDarkestSecret(const std::string darkest_secret){
	this->_darkest_secret = darkest_secret;
}

//***GETTERS****//
const std::string	Contact::getFirstName(){
	return (this->_first_name);
}

const std::string	Contact::getLastName(){
	return (this->_last_name);
}

const std::string	Contact::getNickname(){
	return (this->_nickname);
}

const std::string	Contact::getPhoneNumber(){
	return (this->_phone_number);
}

const std::string	Contact::getDarkestSecret(){
	return (this->_darkest_secret);
}