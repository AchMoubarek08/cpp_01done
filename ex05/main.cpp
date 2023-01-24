/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 03:36:06 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 03:38:38 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl h;
    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");
    h.complain("COMPLAIN");
}