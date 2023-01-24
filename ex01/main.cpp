/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:36:54 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 03:13:43 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombies;
    zombies = zombieHorde(-5, "Zombie");
    for (int i = 0; i < 5; i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}