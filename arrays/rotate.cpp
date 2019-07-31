#include <iostream>
#include <fstream>

using namespace std;

int main() {

  long T, N, K;

  cin >> T;

  while(T--) {
    cin >> N >> K;
    long arr[N] = {0};

    for(long i = 0; i < N; i++)
      cin >> arr[i];

    long from = 0;
    from = (N - (K % N)) % N;
   
    for(long i = from, count = 0; count < N; count++, i = (i + 1) % N)
      cout << arr[i] << " ";
  }
  
  return 0;
}



