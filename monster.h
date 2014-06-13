#ifndef _MONSTER_H_
#define _MONSTER_H_

#include <cmath>

class Monster {
 public:
  Monster(int level)
    : level_(level) {
  }
  virtual ~Monster() { } 

  int level() const { return level_; }
  int attack() const;
  int max_hp() const;

 protected:
  int base_attack() const;
  int base_health() const;

  virtual double attack_mod() const = 0;
  virtual double health_mod() const = 0;

  int level_;
};

class MeatMan : public Monster {
 public:
  MeatMan(int level) : Monster(level) { }

 protected:
  double attack_mod() const override;
  double health_mod() const override;
};

// http://www.qcfdesign.com/wiki/DesktopDungeons/index.php?title=Alpha:Level#Enemy_levels<

#endif  // _MONSTER_H_
