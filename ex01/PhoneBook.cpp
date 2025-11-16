/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 00:39:16 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/16 11:03:19 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact(void)
{
    Contact let;
    std::string last_name;

    std::cout << "entre the last_name here : " << std::endl;
    std::cin.ignore();
    std::getline(std::cin >> std::ws ,last_name);
    if( last_name.empty())
    {
        std::cout << "Field cannot be empty." << std::endl;
        return ;
    }

    let.SetLastName(last_name);

    std::string first_name;
    std::cout << "entre the first_name here : " << std::endl;
    std::getline(std::cin >> std::ws,first_name);
    if(first_name.empty())
    {
        std::cout << "Field cannot be empty." << std::endl;
        return ;
    }

    let.SetFirstName(first_name);

    std::string NickName;
    std::cout << "entre the NickName here : " << std::endl;
    std::getline(std::cin >> std::ws,NickName);
    if(NickName.empty() )
    {
        std::cout << "Field  cannot be empty." << std::endl;
        return ;
    }

    let.SetNickName(NickName);

    std::string PhoneNumber;
    std::cout << "entre the PhoneNumber here : " << std::endl;
    std::getline(std::cin >> std::ws,PhoneNumber);
    let.SetNumberPhone(PhoneNumber);

    std::string DarkestSecret;
    std::cout << "entre the DarkestSecret here : " << std::endl;
    std::getline(std::cin >> std::ws,DarkestSecret);
    if(DarkestSecret.empty())
    {
        std::cout << "Field cannot be empty." << std::endl;
        return ;
    }
    let.SetDarkestSecret(DarkestSecret);
    contact[index % 8] = let;
    if(index < 8)
        index++;
}
void PhoneBook::search_contact()
{

    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < index;i++)
    {
        contact[i].DisplayShort(i + 1);
    }
    int user_index = 0;
    std::cout << "Entre index from 1 -> 8" << std::endl;
	std::cin >> user_index;
    if(user_index < 1 || user_index > 8 || user_index > index)
    {
        if(user_index > index)
        {
            std::cout << "the Contact is empty" << std::endl;
            return ;
        }
        std::cout << "You'r Out the interval" << std::endl;
        return ;
    }
    contact[user_index - 1].DisplayFullContact();
}