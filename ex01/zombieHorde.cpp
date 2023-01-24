/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:37:04 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 03:22:42 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N <= 0)
        return (NULL);
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].set_name(name);
    return (zombies);
}