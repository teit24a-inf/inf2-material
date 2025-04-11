#include "find_lists.h"

#include <algorithm>

using namespace std;

int find_element(vector<int> list, int el) {
  auto iter = find(list.begin(), list.end(), el);
  return iter - list.begin();
}

int find_element(vector<string> names, string name) {
  auto iter = find(names.begin(), names.end(), name);
  return iter - names.begin();
}
