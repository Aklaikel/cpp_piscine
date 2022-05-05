/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>           +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:09:46 by aklaikel           #+#    #+#             */
/*   Updated: 2022/05/03 21:09:47 by aklaike           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av){
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
        return(0);
    }
    for(int i=1; i < ac ; i++)
    {
        std::string s(av[i]);
        for(int j=0; (int)s.length() > j; j++)
            s[j] = toupper(s[j]);
        std :: cout << s << " ";
    }
    std::cout << std::endl;
    return 0;
}