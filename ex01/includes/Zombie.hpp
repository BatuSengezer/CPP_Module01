/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 02:41:51 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 02:41:53 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
  Zombie();
  void setName(const std::string &name);
  ~Zombie();
  void announce(void) const;

private:
  std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif