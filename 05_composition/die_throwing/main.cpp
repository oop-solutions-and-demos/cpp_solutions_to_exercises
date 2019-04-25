// Compile using: g++ die.cpp die_thrower.cpp main.cpp -o diethrower.exe
#include <iostream>
#include "die.h"
#include "die_thrower.h"

using namespace std;

int main() {
  const unsigned int POPULATION_SIZE = 100000;

  cout << "Welcome to the Die Thrower app" << endl;

  Die die(1, 6);
  DieThrower thrower(die, POPULATION_SIZE);
  thrower.roll();
  cout << "Result:" << endl << thrower.to_string();

  return 0;
}