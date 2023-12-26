#include "Zombie.hpp"

int main() {
  int N = 3;
  std::string name = "HordeZombie";

  Zombie *horde = zombieHorde(N, name);

  delete[] horde;

  return 0;
}
