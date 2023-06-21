/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarissi <ofarissi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:34:48 by ofarissi          #+#    #+#             */
/*   Updated: 2023/06/17 11:34:49 by ofarissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie  *z;

    z = new Zombie(name);

    return z;
}