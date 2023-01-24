/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:57:50 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/24 03:06:26 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

int main(int ac, char **av)
{
    std::ifstream file;
    std::string line;
    std::string line2;
    std::string s1;
    std::string s2;
    int pos = 0;
    if(ac != 4)
    {
        std::cout << "Usage: ./searchAndReplace [filename] [str1] [str2]" << std::endl;
        return (0);
    }
    s1 = av[2];
    s2 = av[3];
    if(s1.empty())
    {
        std::cout << "Error: Empty string" << std::endl;
        return (0);
    }
    file.open(av[1]);
    if (!file.is_open())
    {
        std::cout << "Error: File not found" << std::endl;
        return (0);
    }
    while (std::getline(file, line))
    {
        line2 += line;
        line2 += '\n';
    }
    while((pos = line2.find(s1, pos)) != -1)
    {
        line2.erase(pos, s1.length());
        line2.insert(pos, s2);
        pos += s2.length();
    }
    std::ofstream file2(av[1] + std::string(".replace"));
    file2 << line2;
    std::cout << line2 << std::endl;
}