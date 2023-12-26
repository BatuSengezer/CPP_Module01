/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:25:32 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 04:25:34 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
public:
  HumanA(const std::string &name, Weapon &weapon);
  ~HumanA();
  void attack() const;

private:
  std::string _name;
  Weapon &_weapon;
};

#endif
