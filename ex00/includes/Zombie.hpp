/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 23:49:20 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/25 23:49:21 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
  Zombie(std::string name);
  ~Zombie();
  void announce(void) const;

private:
  std::string _name;
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif