/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 00:23:25 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/16 00:39:13 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string ok ;
    PhoneBook Phone;
    while(true)
    {
        std::cout<< "You allowed to entre tree Commands : ADD || SEARCH || EXIT" << std::endl;
        std::cin >> ok;
        if(ok == "ADD")
        {
            Phone.add_contact();
        }
        else if(ok == "SEARCH")
        {
            Phone.search_contact();
        }
        else if(ok == "EXIT")
        {
            break;
        }
        else 
        {
            std::cout << "The program only accepts ADD, SEARCH and EXIT." << std::endl;
        }
    }

    return (0);
}