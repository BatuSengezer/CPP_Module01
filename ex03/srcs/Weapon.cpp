/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:26:15 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 04:26:17 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const { return this->type; }

void Weapon::setType(const std::string &type) { this->type = type; }
