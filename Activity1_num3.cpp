#include <iostream>

int main() {
  
  const int size = 10;
  int nums[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  
  int newnum = 65;
  int place = 2;
  
  if (place >= 0 && place < size) {
    for (int i = size - 1; i >= place; i--) {
      nums[i] = nums[i - 1];
    }
    nums[place] = newnum;

    
    for (int i = 0; i < size; i++) {
      std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
  } else {
    std::cout << "Invalid position." << std::endl;
  }

  return 0;
}
