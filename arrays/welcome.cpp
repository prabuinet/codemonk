#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int arr[N];
  
  for(int i = 0; i < N; i++)
    cin >> arr[i];

  for(int i = 0; i < N; i++) {
    int y;
    cin >> y;
    cout << (arr[i] + y) << ' ';
  }
  
  return 0;
}


/*

learnt:

use this header includes all the other headers
#include <bits/stdc++.h>

declare arrays statically like this for example: 10^5
int a[100005];

*/
