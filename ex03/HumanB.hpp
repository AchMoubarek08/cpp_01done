/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:45:26 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 00:45:43 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon &weapon);
};

#endif