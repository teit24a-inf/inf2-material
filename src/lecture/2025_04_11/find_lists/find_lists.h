#ifndef FIND_LISTS_H
#define FIND_LISTS_H

#include <string>
#include <vector>

/// Sucht ein Element in list und liefert dessen Position.
/// Liefert die Länge der Liste, falls das Element nicht
/// enthalten ist.
int find_element(std::vector<int> list, int el);

/// Sucht ein Element in names und liefert dessen Position.
/// Liefert die Länge der Liste, falls das Element nicht
/// enthalten ist.
int find_element(std::vector<std::string> names, std::string name);

#endif
