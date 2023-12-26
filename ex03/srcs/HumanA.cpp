/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:25:58 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 04:26:00 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
    : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
  std::cout << _name << " attacks with their " << _weapon.getType()
            << std::endl;
}
