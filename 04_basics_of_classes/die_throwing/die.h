#pragma once

class Die {

  public:
    Die(unsigned int min = 1, unsigned int max = 6);

  public:
    unsigned int roll(void);

  public:
    unsigned int get_max(void);
    unsigned int get_min(void);
    unsigned int get_range(void);

  private:
    unsigned int min = 0;
    unsigned int max = 0;
    unsigned int range = 0;
};