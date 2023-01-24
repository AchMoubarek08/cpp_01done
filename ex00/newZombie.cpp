/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:35:27 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 03:14:20 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void   Zombie::set_name(std::string name)
{
    this->name = name;
}
Zombie*    newZombie(std::string name)
{
    Zombie *z;
    z = new Zombie;
    z->set_name(name);
    return (z);
}