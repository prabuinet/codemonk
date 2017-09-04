#include <iostream>
#include <string>

int main() {
  int t;
  std::cin >> t;
  while(t--) {
    std::string str;
    std::cin >> str;
    int x = ((char) str[str.size() - 1]) - '0';
    if(x % 2 == 0)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }
  return 0;
}
