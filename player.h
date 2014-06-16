#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <cmath>

class Player {
 public:
  explicit Player(int level)
    : level_(level), xp_(0) { }
  ~Player() { }
     
  // http://www.qcfdesign.com/wiki/DesktopDungeons/index.php?title=Alpha:Level
  int level() const { return level_; }
  int attack() const { return 5 * level_; }
  int max_hp() const { return 10 * level_; }
  int xp() const { return xp_; }
  void add_xp(int xp);

 private:
  int level_;  
  int xp_;
};

#endif  // _PLAYER_H_
