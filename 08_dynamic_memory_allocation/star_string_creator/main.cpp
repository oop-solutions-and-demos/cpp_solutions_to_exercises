#include <iostream>
#include "star_creator.h"

using namespace std;

int main() {
  StarCreator starCreator;
  for (unsigned int i = 0; i < 5; i++) {
    char * stars = starCreator.create_stars(i);
    if (stars) {
      cout << stars << endl;;
      delete[] stars;
    }
  }

  return 0;
}