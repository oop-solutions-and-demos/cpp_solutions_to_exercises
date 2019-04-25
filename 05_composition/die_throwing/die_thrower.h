#pragma once

#include <vector>
#include <string>
#include "die.h"

class DieThrower {

  public:
    DieThrower(Die die, unsigned int numberOfThrows);

  public:
    void roll(void);
  
  public:
    std::string to_string(void);

  private:
    Die die;
    unsigned int numberOfThrows = 0;
    std::vector<unsigned int> freqTable;
};