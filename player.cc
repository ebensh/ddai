#include "player.h"


void Player::add_xp(int xp) {
  xp_ += xp;
  // This may be an anti-optimization, since the common case is low to high.
  // This is also cleanly replaced by loop.
  if (xp_ >= 225) { level_ = 10; return; }
  if (xp_ >= 180) { level_ = 9; return; }
  if (xp_ >= 140) { level_ = 8; return; }
  if (xp_ >= 105) { level_ = 7; return; }
  if (xp_ >= 75) { level_ = 6; return; }
  if (xp_ >= 50) { level_ = 5; return; }
  if (xp_ >= 30) { level_ = 4; return; }
  if (xp_ >= 15) { level_ = 3; return; }
  if (xp_ >= 5) { level_ = 2; return; }
  return 1;
}

Required experience per level

To reach level	Experience required	Total required
1	 0	 0
2	 5	 5
3	 10	 
4	 15	 
5	 20	 
6	 25	 
7	 30	 
8	 35	 



}
