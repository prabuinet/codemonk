#include <iostream>

typedef unsigned long long ll;

int main() {
  ll n, q;
  std::cin >> n >> q;

  ll arr[n];
  ll sums[n];

  ll sum = 0;
  for(ll i = 0; i < n; i++) {
    ll x;
    std::cin >> x;
    sum += x;
    arr[i] = x;
    sums[i] = sum;
  }

  /*
  std::cout << "sums: ";
  for(int i = 0; i < n; i++) {
    std::cout << sums[i] << " ";
  }
  std::cout << std::endl;
  */
  
  while(q--) {
    ll cmd, p1, p2;

    std::cin >> cmd >> p1 >> p2;

    //std::cout << "cmd: " << cmd << " " << p1 << " " << p2 << std::endl;
    
    if(cmd == 1) {
      ll diff = p2 - arr[p1];
      for(ll j = p1; j < n; j++)
	sums[j] += diff;
      arr[p1] = p2;
    }
    else {
      //std::cout << "summmm: " << sums[p2] << " " << sums[p1 - 1] << std::endl;
      ll result = sums[p2];
      if(p1 > 0)
	result -= sums[p1 - 1];
      std::cout << result << std::endl;
    }

    /*
  std::cout << "sums: ";
  for(int i = 0; i < n; i++) {
    std::cout << sums[i] << " ";
  }
  std::cout << std::endl;    
    */
  }
  
  return 0;
}
