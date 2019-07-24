#include <iostream>

int main() {
  int t;
  std::cin >> t;

  while(t--) {
    int x;
    std::cin >> x;

    int m = x % 12;

    if (m == 0)
      m = 12;

    int seating = m;
    int facing;

    if(m > 6) {
      seating = m - 6;
    }

    facing = 13 - m;
    facing = x - m + facing;
    
    if(seating == 1 || seating == 6)
      std::cout << facing << " " << "WS" << std::endl;
    else if(seating == 2 || seating == 5)
      std::cout << facing << " " << "MS" << std::endl;
    else
      std::cout << facing << " " << "AS" << std::endl;

  }
  
  return 0;
}


