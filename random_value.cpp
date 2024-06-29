#include <random>

#include "game.h"

int getValue(int value) {
  // использую метод "Вихрь Мерсенна"
  std::random_device rd;
  std::mt19937 mersenne(rd());

  std::uniform_int_distribution<> dis(0, value);

  return dis(mersenne);
}