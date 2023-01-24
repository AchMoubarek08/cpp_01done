/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:55:49 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 00:56:22 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}