/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:40:17 by bsengeze          #+#    #+#             */
/*   Updated: 2023/12/26 04:40:19 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class FileReplacer {
public:
  FileReplacer(const std::string &sourceFile,
               const std::string &destinationFile);
  bool replace(const std::string &from, const std::string &to);

private:
  std::string readFileIntoString();
  std::string sourceFilename;
  std::string destinationFilename;
};

#endif // FILEREPLACER_HPP
