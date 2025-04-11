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

int lookup_fee(std::string name, std::vector<std::string> names,
               std::vector<int> fees) {
  if (names.size() != fees.size()) {
    return -1;
  }

  int pos = find_element(names, name);

  if (pos == names.size()) {
    return -1;
  }

  return fees[pos];
}

int lookup_fee(std::string name, std::vector<PointOfInterest> pois) {
  //   for (int i = 0; i < pois.size(); i++) {
  //     if (pois[i].name == name) {
  //       return pois[i].fee;
  //     }
  //   }

  for (PointOfInterest poi : pois) {
    if (poi.name == name) {
      return poi.fee;
    }
  }

  //   auto iter = std::find_if(pois.begin(), pois.end(),
  //                            [&](PointOfInterest& p) { return p.name == name;
  //                            });
  //   if (iter != pois.end()) {
  //     return iter->fee;
  //   }
  return -1;
}
