/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:54:44 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/23 23:59:47 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    // the adresses
     std::cout << "str = "<< &str << std::endl;
    std::cout << "ptr = " << ptr << std::endl;
    std::cout << "ref = " << &ref << std::endl;
    //the values
    std::cout << "str = "<< str << std::endl;
    std::cout << "ptr = " << *ptr << std::endl;
    std::cout << "ref = " << ref << std::endl;
}