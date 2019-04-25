// Compile using: g++ die.cpp main.cpp -o diethrower.exe
#include <iostream>
#include "die.h"
#include <vector>

using namespace std;

int main() {
  const unsigned int POPULATION_SIZE = 100000;

  Die die(1, 6);

  // C++ standard forbids variable length array
  // 2 options:
  // - std::vector
  // - dynamically allocated memory
  std::vector<unsigned int> throws(die.get_range());

  cout << "Welcome to the Die Thrower app" << endl;

  for (unsigned int i = 0; i < POPULATION_SIZE; i++) {
    unsigned int throwValue = die.roll();
    throws[throwValue-die.get_min()]++;
  }

  cout << "Result:" << endl;
  for (unsigned int i = 0; i < die.get_range(); i++) {
    cout << (i+die.get_min()) << ": " << throws[i] << " throws" << endl;
  }

  return 0;
}