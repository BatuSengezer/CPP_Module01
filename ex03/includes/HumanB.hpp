/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:25:40 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 04:25:41 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
class HumanB {
public:
  HumanB();
  HumanB(const std::string &name);
  ~HumanB();
  void setWeapon(Weapon &weapon);
  void attack() const;

private:
  std::string _name;
  Weapon *_weapon;
};

#endif
