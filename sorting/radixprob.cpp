#include <iostream>

using namespace std;

void countsort(long long arr[], int n, int place) {
  int range = 10;
  int freq[range] = {0};
  int output[n];

  for(int i = 0; i < n; i++)
    freq[ (arr[i] / place) % range ]++;
  
  for(int i = 1; i < range; i++)
    freq[i] += freq[i - 1];

  for(int i = n-1; i >= 0; i--) {
    output[ freq[(arr[i] / place)%range] - 1] = arr[i];
    freq[(arr[i]/place)%range]--;
  }

  for(int i = 0; i < n; i++) {
    arr[i] = output[i];
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main() {
  int N = 7;
  cin >> N;
  
  long long arr[1001];
  long long mx = -1;

  for(int i = 0 ; i < N; i++) {
    cin >> arr[i];
    mx = max(mx, arr[i]);
  }

  int place = 1;
  while(mx > 0) {
    countsort(arr, N, place);
    place *= 10;
    mx /= 10;
  }

  return 0;
}
