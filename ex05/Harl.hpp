/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:02:59 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 03:28:52 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public :
        Harl( void );
        ~Harl( void );
        void complain( std::string level );
};

#endif