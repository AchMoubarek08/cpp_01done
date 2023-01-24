/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:51:06 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 00:51:23 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}

std::string const &Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}