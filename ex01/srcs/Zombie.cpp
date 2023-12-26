
#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::setName(const std::string &name) { _name = name; }

Zombie::~Zombie() { std::cout << _name << ": destroyed" << std::endl; }

void Zombie::announce(void) const {
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
