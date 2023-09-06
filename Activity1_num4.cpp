#include <iostream>

int main() {
  int numbs[] = {5, 4, 3, 2, 1};
  const int size = sizeof(numbs) / sizeof(numbs[0]); 

  for (int i = 0, j = size - 1; i < j; i++, j--) {
    int temp = numbs[i];
    numbs[i] = numbs[j];
    numbs[j] = temp;
  }

  std::cout << "Reversed array: ";
  for (int i = 0; i < size; i++) {
    std::cout << numbs[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
