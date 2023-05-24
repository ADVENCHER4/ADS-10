// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
    std::vector<std::vector<char>> perms = tree.getPermutations();
    std::vector<char> empty;
    return perms.size() > n ? perms[n - 1] : empty;
}
