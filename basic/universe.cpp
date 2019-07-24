#include <iostream>

int main() {
  int x;
  
  while(true) {
    std::cin >> x;
    if(x == 42)
      break;
    std::cout << x << std::endl;
  }

  
  return 0;
}
