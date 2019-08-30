#include <iostream>

using namespace std;

void counting(int arr[], int n) {
  int mx = arr[0];

  for(int i = 0; i < n; i++)
    mx = max(mx, arr[i]);

  int aux[mx + 1];
  for(int i = 0; i < mx + 1; i++)
    aux[i] = 0;

  for(int i = 0; i < n; i++)
    aux[arr[i]]++;

  int ai = 0;
  for(int i = 0; i < mx + 1; i++) {
    for(int j = 0; j < aux[i]; j++) {
      arr[ai++] = i;
    }
  }
}

int main() {
  int N = 7;

  int arr[] = {5, 4, 8, 2, 50, 3, 10};

  counting(arr, N);

  for(int i = 0; i < 7; i++)
    cout << arr[i] << ' ';

  cout << '\n';  

  return 0;
}
