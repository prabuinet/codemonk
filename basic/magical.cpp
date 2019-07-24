#include <iostream>
#include <string>

bool is_prime2(int n) {
  for(int i = 2; i < n; i++) {
    if(n % i == 0)
      return false;
  }
  return true;
}

bool is_alpha_prime(int n) {
  if((n >= 65 && n <= 65+26) || (n >= 97 && n <= 97+26)) 
    return is_prime2(n);
  return false;
}

int main() {
  int primes[256 + 2];
  
  for(int i = 0; i <= 255; i++) {
    if(is_alpha_prime(i))
      primes[i] = i;
    else {
      int prleft = -12121212;
      for(int j = i - 1; j >= 2; j--) {
	if(is_alpha_prime(j)) {
	  prleft = j;
	  break;
	}
      }

      int prright = 11256;
      for(int j = i + 1; j <= 255; j++) {
	if(is_alpha_prime(j)) {
	  prright = j;
	  break;
	}
      }

      if((i - prleft) <= (prright - i)) {
	primes[i] = prleft;
      } else {
	primes[i] = prright;
      }
    }
  }


  /*
  for(int i = 33; i <= 33; i++) {
    std::cout << i << " " << primes[i] << (char) primes[i] << std::endl;
  }


  return 0;
  */
  
  
  int t;
  std::cin >> t;

  while(t--) {
    int n;
    std::cin >> n;

    while(n--) {
      char chr;
      std::cin >> chr;
      std::cout << (char) primes[(int) chr];
    }

    std::cout << std::endl;
  }

  
  return 0;
}
