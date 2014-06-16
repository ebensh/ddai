#include <cmath>
#include <iostream>

using namespace std;

struct Player {
  Player(int level) {
    level_ = level;
    hp_ = 10 * level;
    attack_ = 5 * level;
  }

  int level_;
  int hp_;
  int attack_;
};

struct Monster {
  Monster(int level) {
    level_ = level;
    hp_ = static_cast<int>(pow((level + 3), 2) - 10);
    attack_ = static_cast<int>(pow(level, 2) / 2.0 + 5.0 * level / 2);
  }

  int level_;
  int hp_;
  int attack_;
};

int hits_to_kill(int attack, int hp) {
  return ceil(static_cast<float>(hp) / attack);
}

int main() {
  cout << "Begin mucking about :)" << endl;

  Player p(1);
  Monster m(2);

  cout << p.attack_ << ", " << p.hp_ << endl;
  cout << m.attack_ << ", " << m.hp_ << endl;

  cout << "P to kill M: " << hits_to_kill(p.attack_, m.hp_) << endl;
  cout << "M to kill P: " << hits_to_kill(m.attack_, p.hp_) << endl;

  return 0;


  // while (p.hp > 0 && m.hp > 0) {
  //   cout << p.hp << ", " << m.hp << endl;
  //   p.hp -= m.attack_damage;
  //   m.hp -= p.attack_damage;
  // }

  // if (p.hp > 0) { cout << "Player won!" << endl; }
  // else { cout << "Player lost :(" << endl; }

  cout << "End mucking about :)" << endl;
  return 0;
}
