/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarissi <ofarissi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:34:42 by ofarissi          #+#    #+#             */
/*   Updated: 2023/06/18 00:48:43 by ofarissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Zombie.hpp"

int main()
{
    Zombie  z1("objmane");
    Zombie  z2("hamza");
    Zombie  *z3;

    z1.announce();
    z2.announce();
    z3 = newZombie("taha");
    z3->announce();
    delete z3;
    randomChump("youssef");
}