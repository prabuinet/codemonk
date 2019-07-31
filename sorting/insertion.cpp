#include <iostream>

using namespace std;

/* insertion sort  */

int sort(int arr[], int n) {
  
  for(int i = 0; i < n; i++) {
    int temp = arr[i];

    int j = i;
    for(  ; j > 0 && arr[j - 1] > temp; j--)
      arr[j] = arr[j-1];

    arr[j] = temp;    
  }
  
}

int sort_pos(int arr[], int pos[], int n) {
  
  for(int i = 0; i < n; i++) {
    int temp = arr[i];
    int temp_pos = pos[i];

    int j = i;
    for(  ; j > 0 && arr[j - 1] > temp; j--) {
      arr[j] = arr[j-1];
      pos[j] = pos[j-1];
    }

    arr[j] = temp;
    pos[j] = temp_pos;
  }
  
}

int main() {
  int arr[100], pos[100];
  int n;

  cin >> n;
  
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
    pos[i] = i;
  }

  sort_pos(arr, pos, n);

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      if(pos[j] == i)
	cout << j + 1 << ' ';

  cout << '\n';
}
