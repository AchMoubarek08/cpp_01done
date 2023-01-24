/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:40:17 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 00:40:59 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string const &getType();
        void    setType(std::string type);
};

#endif