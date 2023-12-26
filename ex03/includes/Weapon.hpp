/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:25:48 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 04:25:53 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public:
  Weapon();
  Weapon(const std::string &type);
  ~Weapon();
  const std::string &getType() const;
  void setType(const std::string &type);

private:
  std::string type;
};

#endif
