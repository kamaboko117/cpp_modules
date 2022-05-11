/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaboure <asaboure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:41:13 by asaboure          #+#    #+#             */
/*   Updated: 2022/05/11 15:55:24 by asaboure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>

class Span
{
private:
	Span();																//CANON
	std::vector<int>	_span;
	size_t				_len;

public:
	Span(unsigned int n);
	Span(const Span &src);												//CANON
	~Span();															//CANON

	Span	&operator=(Span &rhs);										//CANON

	void	addNumber(int n);
	int		shortestSpan() const;
	int		longestSpan() const;
};


#endif