/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 23:49:48 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 00:20:07 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) { announce(); }

Zombie::~Zombie() { std::cout << this->_name << ": destroyed" << std::endl; }

void Zombie::announce(void) const {
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
