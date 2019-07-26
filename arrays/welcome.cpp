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
