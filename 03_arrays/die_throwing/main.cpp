// Compile using: g++ main.cpp -o diethrower
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  const unsigned int POPULATION_SIZE = 100000;
  const unsigned int MIN = 3;
  const unsigned int MAX = 6;
  const unsigned int RANGE = MAX - MIN + 1;
  unsigned int throws[RANGE] = { 0 };

  cout << "Welcome to the Die Thrower app" << endl;

  srand (time(NULL));
  for (unsigned int i = 0; i < POPULATION_SIZE; i++) {
    unsigned int throwValue = (rand() % RANGE) + MIN;
    throws[throwValue-MIN]++;
  }

  cout << "Result:" << endl;
  for (unsigned int i = 0; i < RANGE; i++) {
    cout << (i+MIN) << ": " << throws[i] << " throws" << endl;
  }

  return 0;
}