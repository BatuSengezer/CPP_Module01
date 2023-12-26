#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
class HumanB {
public:
  HumanB();
  HumanB(const std::string &name);
  ~HumanB();
  void setWeapon(Weapon &weapon);
  void attack() const;

private:
  std::string _name;
  Weapon *_weapon;
};

#endif
