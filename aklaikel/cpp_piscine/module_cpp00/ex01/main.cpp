/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 04:21:26 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/15 06:26:31 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   phone;
    string str;
    
    while(str != "EXIT")
    {
        std::cout << "Write One Of The Commands Bellow" <<std::endl;
        std::cout << "-->ADD" <<std::endl;
        std::cout << "-->SEARCH" <<std::endl;
        std::cout << "-->EXIT" <<std::endl << "-->";
        std::cin >> str;
        if(str == "ADD")
            phone.add();
        else if (str == "SEARCH")
            phone.search();
        else
        {
            if(!std::cin.good())
                return 0;
            std::cout << "Command " << str << "Not Found"<< std::endl;
        }
    }
    return (0);
}