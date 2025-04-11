#include <iostream>

#include "find_lists.h"

using namespace std;

int main() {
  vector<int> v1{12, 105, 33, 27, 255, 38};
  std::cout << find_element(v1, 27) << std::endl;
}
