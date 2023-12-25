/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 23:49:26 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 00:19:46 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
  Zombie *heapZombie = newZombie("HeapZombie");
  randomChump("StackZombie");
  delete heapZombie;
  return 0;
}
