#include <iostream>

using namespace std;

/* selection sort  */

int sort(int arr[], int n) {
  
  for(int i = 0; i < n - 1; i++) {

    int min = i;
    
    for(int j = i + 1; j < n; j++) {      
      if(arr[j] < arr[min])
	min = j;	
    }

    int t = arr[i];
    arr[i] = arr[min];
    arr[min] = t;
    
  }
  
}

int sort_iteration(int arr[], int n, int iteration) {
  
  for(int i = 0; i < n - 1 && i < iteration; i++) {

    int min = i;
    
    for(int j = i + 1; j < n; j++) {      
      if(arr[j] < arr[min])
	min = j;	
    }

    int t = arr[i];
    arr[i] = arr[min];
    arr[min] = t;
    
  }
  
}


int main() {
  int arr[100];
  int n, iter;

  cin >> n >> iter;
  
  for(int i = 0; i < n; i++)
    cin >> arr[i];

  sort_iteration(arr, n, iter);

  for(int i = 0; i < n; i++)
    cout << arr[i] << ' ';

  cout << '\n';
}
