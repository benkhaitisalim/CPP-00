/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 00:39:04 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/16 15:29:01 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <cctype>
#include <iomanip>

class Contact 
{
private:
	//attribut  
	std::string LastName;
	std::string FirstName;
	std::string NickName;
	std::string DarkestSecret;
	std::string PhoneNumber;
public:
	// method
	Contact()
	{
    FirstName = "";
    LastName = "";
    NickName = "";
    DarkestSecret = "";
    PhoneNumber = "";
	};
	void DisplayShort(int index) const;
	void DisplayFullContact(void) const;
	void SetLastName(std::string first_n);
	void SetFirstName(std::string last_n);
	void SetNickName(std::string NickName);
	void SetDarkestSecret(std::string DarkSecret);
	void SetNumberPhone(std::string &last_n);
	std::string GetLastName() const;
	std::string GetFirstName() const;
	std::string GetNickName() const;
	std::string GetDarkestSecret() const;
	std::string GetNumberPhone() const;
};
#endif


