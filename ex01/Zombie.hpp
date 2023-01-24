/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:37:02 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/23 23:51:46 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <iomanip>
class Zombie
{
    private:
        std::string name;
    public:
        ~Zombie();
        Zombie();
        Zombie(std::string name);
        void    announce();
        void    set_name(std::string name);
};
Zombie* zombieHorde( int N, std::string name );

#endif