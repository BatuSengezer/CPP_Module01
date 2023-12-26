/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 02:43:32 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 02:49:07 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
  std::string str = "HI THIS IS BRAIN";

  std::string *stringPTR = &str;

  std::string &stringREF = str;

  std::cout << "Address of the string variable: " << &str << std::endl;
  std::cout << "Address held by stringPTR:      " << stringPTR << std::endl;
  std::cout << "Address held by stringREF:      " << &stringREF << std::endl;

  std::cout << "Value of the string variable:   " << str << std::endl;
  std::cout << "Value pointed to by stringPTR:  " << *stringPTR << std::endl;
  std::cout << "Value pointed to by stringREF:  " << stringREF << std::endl;

  return 0;
}
