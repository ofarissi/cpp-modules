/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarissi <ofarissi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:34:56 by ofarissi          #+#    #+#             */
/*   Updated: 2023/06/17 11:52:44 by ofarissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include    <iostream>

class Zombie {
    private:
            std::string name;
    public:
            Zombie();
            Zombie(std::string name);
            void    announce();
            ~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif