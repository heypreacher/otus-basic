#include <iostream>

#include "game.h"

int checkValue(int random) {
  int current_value = 0;
  bool not_win = true;

  std::cout << "Enter your guess:" << std::endl;
  int count;
  do {
    ++count;
    std::cin >> current_value;

    if (current_value > random) {
      std::cout << "less than " << current_value << std::endl;
    } else if (current_value < random) {
      std::cout << "greater than " << current_value << std::endl;
    } else {
      std::cout << "you win!" << " ";
      std::cout << "attempts = " << count << std::endl;
      break;
    }

  } while (true);

  return count;
}