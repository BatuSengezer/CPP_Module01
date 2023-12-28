/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:20:06 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 23:55:06 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
  std::cout << "[ DEBUG ]" << std::endl
            << "I love having extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger."
            << std::endl
            << "I really do!" << std::endl
            << std::endl;
}

void Harl::info() {
  std::cout << "[ INFO ]" << std::endl
            << "I cannot believe adding extra bacon costs more money."
            << std::endl
            << "You didn’t put enough bacon in my burger!" << std::endl
            << "If you did, I wouldn’t be asking for more!" << std::endl
            << std::endl;
}

void Harl::warning() {
  std::cout << "[ WARNING ]" << std::endl
            << "I think I deserve to have some extra bacon for free."
            << std::endl
            << "I’ve been coming for years whereas you started working here "
               "since last month."
            << std::endl
            << std::endl;
}

void Harl::error() {
  std::cout << "[ ERROR ]" << std::endl
            << "This is unacceptable, I want to speak to the manager now."
            << std::endl
            << std::endl;
}

void Harl::filterComplain(std::string level) {
  int levelNum = 0;

  if (level == "DEBUG")
    levelNum = 1;
  else if (level == "INFO")
    levelNum = 2;
  else if (level == "WARNING")
    levelNum = 3;
  else if (level == "ERROR")
    levelNum = 4;

  switch (levelNum) {
  case 1:
    debug();
    // fall through
  case 2:
    info();
    // fall through
  case 3:
    warning();
    // fall through
  case 4:
    error();
    break;
  default:
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
  }
}