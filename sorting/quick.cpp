#include <iostream>

using namespace std;

int arr[1000006];

void swap(int arr[], int x, int y) {
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

int partition(int arr[], int start, int end) {
  int p = start;
  int pv = arr[p];
  
  int li, gi;
  li = p + 1;
  gi = p + 1;

  while(gi <= end) {

    if(arr[gi] < pv) {
      swap(arr, gi, li);
      li++;
    }
        
    gi++;
  }

  swap(arr, p, li - 1);
  
  return li - 1;
}

void quick(int arr[], int start, int end) {
  if(start < end) {
    int p = partition(arr, start, end);
    quick(arr, start, p-1);
    quick(arr, p + 1, end);
  }
}

int main() {

  int N = 7;
  cin >> N;

  for(int i = 0; i < N; i++)
    cin >> arr[i];

  quick(arr, 0, N-1);

  for(int i = 0; i < N; i++)
    cout << arr[i] << " ";  
  
  return 0;
}
