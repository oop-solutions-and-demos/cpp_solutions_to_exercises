#include "die_thrower.h"

#include <iostream>

DieThrower::DieThrower(Die die, unsigned int numberOfThrows) {
  this->die = die;
  this->numberOfThrows = numberOfThrows;
  freqTable.resize(die.get_range(), 0);
}

void DieThrower::roll(void) {
  for (unsigned int i = 0; i < numberOfThrows; i++) {
    unsigned int throwValue = die.roll();
    freqTable[throwValue-die.get_min()]++;
  }
}
  
std::string DieThrower::to_string(void) {
  std::string result = "";
  for (unsigned int i = 0; i < die.get_range(); i++) {
    result += std::to_string(i+die.get_min())
      + ": " + std::to_string(freqTable[i]) + " throws\r\n";
  }
  return result;
}