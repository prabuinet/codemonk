#include <iostream>

using namespace std;

void modsort(int arr[], int n, int k) {

  for(int i = 1; i < n; i++) {
    int v = arr[i];
    int j;
    
    for(j = i; j > 0 && arr[j-1]%k>v%k; j--) {
      
      arr[j] = arr[j-1];
      
    }

    arr[j] = v;
    
  }  
  
}

int main() {

  int N, k;
  cin >> N >> k;

  int arr[N];
  for(int i = 0; i < N; i++)
    cin >> arr[i];
  
  modsort(arr, N, k);

  for(int i = 0; i < N; i++)
    cout << arr[i] << " ";
  
  return 0;
}
