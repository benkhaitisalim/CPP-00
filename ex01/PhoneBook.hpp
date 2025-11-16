/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 00:39:24 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/16 00:39:25 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <cctype>

class PhoneBook {
private:
    Contact contact[8];
    int index;
public:
    PhoneBook() : index(0){}
    void add_contact(void);
    void search_contact(void);
};

#endif