#include <iostream>

using namespace std;

int main() {
  int T;
  int i, j, p, q;

  cin >> T;

  while(T--) {
    int N;
    
    cin >> N;
    int M[N][N];

    for (i = 0; i < N; i++) {
      for(j = 0; j < N; j++) {
	cin >> M[i][j];
      }
    }

    int inversions = 0;

    for (i = 0; i < N; i++) {
      for(j = 0; j < N; j++) {
	for(p = i; p < N; p++) {
	  
	  for(q = j; q < N; q++) {
	    //cout << M[i][j] << " " << M[p][q] << " "  << (M[i][j] > M[p][q]) << endl;
	    if (M[i][j] > M[p][q])
	      inversions++;
	  }
	}
      }
    }

    cout << inversions << endl;
    
  }
  
  return 0;
}
