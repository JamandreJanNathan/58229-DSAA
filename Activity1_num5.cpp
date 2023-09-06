#include <iostream>

int main() {
  int numbs[] = {5, 4, 3, 2, 1};
  int arlen = sizeof(numbs) / sizeof(numbs[0]); 

  std::cout << "Length of the array: " << arlen << std::endl;

  return 0;
}
