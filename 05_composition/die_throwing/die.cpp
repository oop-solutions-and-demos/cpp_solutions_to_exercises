#include "die.h"
#include <cstdlib>
#include <ctime>

Die::Die(unsigned int min, unsigned int max) {
  this->min = min;
  this->max = max;
  this->range = max - min + 1;
  srand(time(NULL));
}

unsigned int Die::roll(void) {
  return (rand() % range) + min;
}

unsigned int Die::get_max(void) {
  return max;
}

unsigned int Die::get_min(void) {
  return min;
}

unsigned int Die::get_range(void) {
  return range;
}