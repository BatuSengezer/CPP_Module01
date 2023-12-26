/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 02:41:58 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 02:42:00 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
  int N = 3;
  std::string name = "HordeZombie";

  Zombie *horde = zombieHorde(N, name);

  delete[] horde;

  return 0;
}
