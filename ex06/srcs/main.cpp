/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:20:10 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 23:44:37 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {

  if (argc != 2) {
    std::cout << "Usage: ./harlFilter <DEBUG|INFO|WARNING|ERROR>" << std::endl;
    return 1;
  }
  Harl harl;

  harl.filterComplain(argv[1]);
  return 0;
}
