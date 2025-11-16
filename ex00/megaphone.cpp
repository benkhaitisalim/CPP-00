/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 00:23:38 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/16 00:23:39 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc , char **argv)
{
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    for(int i = 1; i < argc;i++)
    {
        std::string arg = argv[i];
        for(size_t j = 0; j < arg.length();j++)
        {
            if(std::islower(arg[j]))
            {
                std::cout<< static_cast<char>(std::toupper(arg[j]));
            }
            else if(std::isupper(arg[j]))
            {
                std::cout<< static_cast<char>(std::tolower(arg[j]));
            }
            else 
            {
                std::cout << arg[j];
            }
        }
        std::cout << ' ';
    }
    std::cout << std::endl;
    return 0;
}

