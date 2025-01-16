#include "is_prime.h"

bool is_prime(int number) {
  if (number == 2 || number == 3) {
    return true;
  }

  if (number == 1 || number % 2 == 0 || number % 3 == 0) {
    return false;
  }

  int i = 5;
  while (i * i <= number) {
    if (number % i == 0 || number % (i + 2) == 0) {
      return false;
    }
    i += 6;
  }
  return true;
}
