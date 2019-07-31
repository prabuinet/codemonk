#include <iostream>

using namespace std;

/* bubble sort  */

int sort(int arr[], int n) {
  
  for(int i = 0; i < n - 1; i++) {
    
    for(int j = 0; j < n - i - 1; j++) {
      
      if(arr[j] > arr[j + 1]) {
	
	int t = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = t;
	
      }      
    }    
  }
}


int main() {
  int arr[] = { 5, 4, 5, 2, 50, 3, 10 };

  sort(arr, 7);

  for(int i = 0; i < 7; i++)
    cout << arr[i] << ' ';

  cout << '\n';
}
