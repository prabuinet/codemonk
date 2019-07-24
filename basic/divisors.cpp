#include <iostream>
#include <cmath>
#include <algorithm>


int main() {
  int l, r, k;
  std::cin >> l >> r >> k;
  int count = 0;
  for(int i = std::min(l, r); i <= std::max(l, r); i++)
    if(i % k == 0)
      count++;
  std::cout << count << std::endl;
  return 0;
}
