#include "monster.h"

#include <cmath>

http://www.qcfdesign.com/wiki/DesktopDungeons/index.php?title=Alpha:Level
int Monster::base_attack() const {
  return static_cast<int>(pow(level(), 2) / 2.0 + 5.0 * level() / 2);
}

int Monster::base_health() const {
  return static_cast<int>(pow((level() + 3), 2) - 10);
}

int Monster::attack() const {
  return static_cast<int>(base_attack() * attack_mod());
}

int Monster::max_hp() const {
  return static_cast<int>(base_health() * health_mod());
}

double MeatMan::attack_mod() const { return 0.65; }
double MeatMan::health_mod() const { return 2.00; }
