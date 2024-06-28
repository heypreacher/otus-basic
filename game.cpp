#include "game.h"

#include <iostream>
int main(int argc, char** argv) {
  if (argc > 1) {
    if (strcmp(argv[1], "-max") == 0) {
      int value = std::stoi(argv[2]);
      gameLoop(value);
    } else if (strcmp(argv[1], "-table") == 0) {
      getHighscore();
    }
  } else {
    gameLoop();
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

void gameLoop() {
  std::cout << "Hi! Enter your name, please:" << std::endl;
  std::string name;
  std::cin >> name;
  std::cin.ignore();
  int value{};
  value = getValue();
  int count = checkValue(value);
  getHighscore(name, value);
}