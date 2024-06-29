#include "game.h"

#include <iostream>
int main(int argc, char** argv) {
  if (argc > 1 && (strcmp(argv[1], "-table") == 0)) {
    printHighscore();
  } else if (argc == 2 && (strcmp(argv[1], "-max") == 0)) {
    std::cout << "You forgot write max number. Max number now is 100" << std::endl;
  }
  int value = 100;
  if (argc > 2 && (strcmp(argv[1], "-max") == 0)) {
    value = std::stoi(argv[2]);
    gameLoop(value);
  } else {
    gameLoop(value);
  }
}

void gameLoop(int value) {
  std::cout << "Hi! Enter your name, please:" << std::endl;
  std::string name;
  std::cin >> name;
  std::cin.ignore();
  value = getValue(value);
  int count = checkValue(value);
  getHighscore(name, value);
}
