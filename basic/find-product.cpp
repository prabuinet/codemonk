#include <iostream>
#include <cmath>

int main() {
  long long div = std::pow(10, 9) + 7;

  int n;
  std::cin >> n;

  long long result = 1;
  
  while(n--) {
    long long x;
    std::cin >> x;
    result = (result * x) % div;
  }
  
  std::cout << result;
  
  return 0;
}
