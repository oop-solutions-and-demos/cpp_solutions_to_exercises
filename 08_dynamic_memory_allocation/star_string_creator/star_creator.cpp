// star_creator.cpp
#include "star_creator.h"

char * StarCreator::create_stars(unsigned int size) {
  char * stars = new char[size+1];
  if (stars) {
    for (unsigned int i = 0; i < size; i++) {
      stars[i] = '*';
    }
    stars[size] = '\0';
  }
  return stars;
}