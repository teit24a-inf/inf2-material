#include "vectors2.h"

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  // list_iteration();
  list_find();
}

void list_find() {
  std::vector<int> v2{10, 17, 55, 23, 42, 55, 107, 38};

  // Herausfinden, an welcher Stelle die 55 steht.
  int result = 0;
  for (int i = 0; i < v2.size(); i++) {
    if (v2[i] == 55) {
      result = i;
      break;
    }
  }
  std::cout << result << std::endl;

  // Bessere Methode:
  auto pos_55 = std::find(v2.begin(), v2.end(), 55);
  if (pos_55 != v2.end()) {
    std::cout << pos_55 - v2.begin() << std::endl;  // Stelle ausgeben.
    std::cout
        << *pos_55
        << std::endl;  // Durch den Iterator wieder auf den Wert zugreifen.
  } else {
    std::cout << "Wert nicht gefunden!\n";
  }
}

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
