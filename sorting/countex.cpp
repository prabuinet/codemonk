#include <iostream>

using namespace std;

void counting(int arr[], int aux[], int n, int mx) {

  for(int i = 0; i < mx + 1; i++)
    aux[i] = 0;

  for(int i = 0; i < n; i++)
    aux[arr[i]]++;
  
}

int main() {
  int N = 7;
  cin >> N;
  
  int arr[N];
  int mx = arr[0];

  for(int i = 0; i < N; i++)
    cin >> arr[i];

  for(int i = 0; i < N; i++)
    mx = max(mx, arr[i]);

  int aux[mx + 1];

  counting(arr, aux, N, mx);

  for(int i = 0; i < mx + 1; i++)
    if(aux[i] != 0)
      cout << i << " " << aux[i] << endl;

  return 0;
}
