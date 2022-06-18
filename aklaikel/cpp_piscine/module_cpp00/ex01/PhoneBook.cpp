/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:46:07 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/15 02:38:45 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void){
	this->index = 0;
	this->not_empty = false;
	std::cout << "Welcome to My Awesome PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook(void){
	std::cout<< "See Yaa !" << std::endl;
}

string	PhoneBook::getstr(void) {
	string	str = "";
	while(str.empty())
	{
		if (getline(std::cin, str) == nullptr) {
			std::cout << "Exiting... " << std::endl;
			exit(0);
		}
		if (str.empty())
			std::cout << "\033[1;31mString Must Not Be Empty\033[0m" << std::endl << "-->";
	}
	return str;
}

void    PhoneBook::add(void){
	std::string str;

	if(this->index > 7)
		std::cout << "Overwriting Contact" << this->Contact[this->index % 7].getFirstName() << std::endl;
	std::cout << "Enter The Contact Fisrt Name"<<std::endl;
	str = getstr();
	this->Contact[this->index % 8].setFirstName(str);
	std::cout << "Enter "<< this->Contact[this->index % 8].getFirstName() << "'s Last Name"<< std::endl;
	str = getstr();
	this->Contact[this->index % 8].setLastName(str);
	std::cout << "Enter "<< this->Contact[this->index % 8].getFirstName() << "'s Nick Name"<< std::endl;
	str = getstr();
	this->Contact[this->index % 8].setNickName(str);
	std::cout << "Enter "<< this->Contact[this->index % 8].getFirstName() << "'s Numero Telphone"<< std::endl;
	str = getstr();
	this->Contact[this->index % 8].setNumTel(str);
	std::cout << "Enter "<< this->Contact[this->index % 8].getFirstName() << "'s Darkest Secret"<< std::endl;
	str = getstr();
	this->Contact[this->index % 8].setDarkestSecret(str);
	std::cout << "the Contact "<< this->Contact[this->index % 8].getFirstName() << "was added seccussfly"<< std::endl;
	this->index++;
	this->not_empty = true;
}

void	PhoneBook::show_contact(void){
	std::cout << std::setw(10) << "index" << "|"
		 << std::setw(10) << "first name" << "|"
		 << std::setw(10) << "last name" << "|"
		 << std::setw(10) << "nick name" << std::endl;
	for(int i=0; i < index && i < 8; i++) {
		std::cout << std::setw(10) << i << "|"
		 << std::setw(10) << this->Contact[i].getFirstName().substr(0, 9) + (this->Contact[i].getFirstName().length() > 10 ? "." : "") << "|"
		 << std::setw(10) << this->Contact[i].getLastName().substr(0, 9)  + (this->Contact[i].getFirstName().length() > 10 ? "." : "") << "|"
		 << std::setw(10) << this->Contact[i].getNickName().substr(0, 9)  + (this->Contact[i].getFirstName().length() > 10 ? "." : "") << std::endl;
	}

	int n;
	std::cin >> n;
	
}

void    PhoneBook::search(void){
	show_contact();
} 
