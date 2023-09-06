#include <iostream>

int main() {
 
  int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

 
  std::cout << "Array numbers: ";
  for (int i = 0; i < 10; i++) {
    std::cout << nums[i] << " ";
  }
  std::cout << std::endl;

 
  int numsum = 0;
  for (int i = 0; i < 10; i++) {
    numsum += nums[i];
  }

  
  std::cout << "Sum: " << numsum << std::endl;

  return 0;
}
