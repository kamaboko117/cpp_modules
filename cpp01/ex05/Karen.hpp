/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:09:24 by asaboure          #+#    #+#             */
/*   Updated: 2021/12/21 14:34:17 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>

class Karen
{
private:
	enum	levels{DEBUG, INFO, WARNING, ERROR};
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Karen();
	~Karen();

	void	complain(std::string level);
};

#endif