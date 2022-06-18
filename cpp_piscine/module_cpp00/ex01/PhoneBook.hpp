/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:41:51 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/15 02:21:16 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	Contact[8];
	int		index;
	bool	not_empty;
	void	show_contact(void);
	string	getstr(void);
public:
	void    add();
	void    search();
	PhoneBook(void);
	~PhoneBook(void);
};

#endif