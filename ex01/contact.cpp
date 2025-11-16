/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 00:39:00 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/16 10:54:37 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::SetNumberPhone(std::string &str)
{
    if(str.empty())
    {
        std::cout << "Field  cannot be empty." << std::endl;
        return ;
    }
    for(size_t j = 0;j < str.length() ; j++)
    {
        if(!isdigit(str[j]))
        {
            std::cout << "Invalid Phone Number" << std::endl;
            return ;
        }
    }
    this->PhoneNumber = str;
}

std::string Contact::GetLastName() const
{
    return LastName;
}
std::string Contact::GetFirstName() const
{
    return FirstName;
}
std::string Contact::GetNickName() const
{
    return NickName;
}
std::string Contact::GetDarkestSecret() const
{
    return DarkestSecret;
}
std::string Contact::GetNumberPhone() const
{
    return PhoneNumber;
}

void Contact::SetLastName(std::string last_n)
{
	this->LastName = last_n;
}
void Contact::SetFirstName(std::string first_n )
{
	this->FirstName = first_n;
}
void Contact::SetNickName(std::string niken)
{
	this->NickName = niken;
}
void Contact::SetDarkestSecret(std::string DarkS)
{
	this->DarkestSecret = DarkS;
}


static std::string truncated_string(std::string input)
{
    if(input.length() > 10)
    {
        return (input.substr(0,9) + ".");
    }
    else 
        return std::string(10 - input.length(), ' ') + input;

}
void Contact::DisplayShort(int index) const
{
	std::cout << std::setw(10) << index << "|" << truncated_string(FirstName) << "|" << truncated_string(LastName) << "|" << truncated_string(NickName) << "|" << std::endl;
};

void Contact::DisplayFullContact() const
{
    std::cout << "first name      : " << GetFirstName() << std::endl;
    std::cout << "last name       : " << GetLastName() << std::endl;
    std::cout << "nickname        : " << GetNickName() << std::endl;
    std::cout << "phone number    : " << GetNumberPhone() << std::endl;
    std::cout << "darkest secret  : " << GetDarkestSecret()<< std::endl;
}
