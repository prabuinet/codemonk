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

int main2() {
  fstream f1, f2;
  f1.open("1.txt", ios_base::in);
  f2.open("2.txt", ios_base::in);
  
  while(!f1.eof() && !f2.eof()) {
    int i1, i2;
    f1 >> i1;
    f2 >> i2;
    if (i1 != i2)
      cout << "Not Equal ";
    cout << i1 << " " << i2 << " " << endl;
  }
}


/*

N K
5 0 5%5 0
5 2 3%5 3
5 8 -3


*/

