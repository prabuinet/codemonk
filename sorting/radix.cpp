#include <iostream>

using namespace std;

void countsort(int arr[], int n, int place) {
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

  for(int i = 0; i < n; i++)
    arr[i] = output[i];
}

int main() {
  int N = 7;

  //int arr[] = {5, 4, 8, 2, 50, 3, 10};
  int arr[] = {77, 66, 15, 24, 13, 22, 11};

   for(int i = 0; i < 7; i++)
     cout << arr[i] << ' ';
   cout << endl;
    
  countsort(arr, N, 1);
  countsort(arr, N, 10);  
  
  for(int i = 0; i < 7; i++)
    cout << arr[i] << ' ';

  cout << '\n';  

  return 0;
}
