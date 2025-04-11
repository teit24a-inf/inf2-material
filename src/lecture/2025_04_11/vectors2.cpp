#include "vectors2.h"

#include <iostream>
#include <vector>

int main() { list_iteration(); }

void list_iteration() {
  std::vector<int> v1;

  // Elemente am Ende einfügen.
  v1.push_back(42);
  v1.push_back(23);
  v1.push_back(103);
  v1.push_back(55);

  // Zähler-Schleife, die über der Vector läuft.
  for (int i = 0; i < v1.size(); i++) {
    std::cout << v1[i] << " ";
  }
  std::cout << std::endl;

  // Range-Schleife, die über der Vector läuft.
  for (int el : v1) {
    std::cout << el << " ";
  }
  std::cout << std::endl;

  // Elemente am Anfang einfügen.
  v1.insert(v1.begin(), 255);

  // Noch mal alle Elemente ausgeben.
  for (int el : v1) {
    std::cout << el << " ";
  }
  std::cout << std::endl;

  // Elemente an Stelle 2 einfügen.
  v1.insert(v1.begin() + 2, 700);

  // Noch mal alle Elemente ausgeben.
  for (int el : v1) {
    std::cout << el << " ";
  }
  std::cout << std::endl;
}
