/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:26:06 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 04:26:07 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(const std::string &name) : _name(name), _weapon(nullptr) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }

void HumanB::attack() const {
  if (_weapon) {
    std::cout << _name << " attacks with their " << _weapon->getType()
              << std::endl;
  } else {
    std::cout << _name << " has no weapon to attack with" << std::endl;
  }
}
