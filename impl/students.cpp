#include <iostream>

int domat() {
  int n, m, k;
  std::cin >> n >> m >> k;

  int m1[n][m];
  int m2[m][k];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      std::cin >> m1[i][j];
    }
  }

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < k; j++) {
      std::cin >> m2[i][j];
    }
  }

  /*
  std::cout << "m1 " << std::endl;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      std::cout << m1[i][j] << " ";
    }
    std::cout << std::endl;
  }

  std::cout << "m2 " << std::endl;  
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < k; j++) {
      std::cout << m2[i][j] << " ";
    }
    std::cout << std::endl;
  }
  */

  for(int x = 0; x < n; x++) {
    for(int y = 0; y < k; y++) {
      int sum = 0;
      for(int z = 0; z < m; z++) {
	sum += (m1[x][z] * m2[z][y]);
      }
      std::cout << sum << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  int t;
  std::cin >> t;
  while(t--) {
    domat();
  }
  return 0;
}
