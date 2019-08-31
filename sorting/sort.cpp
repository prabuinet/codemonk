#include <iostream>

using namespace std;

int     arr[1000006];
int tmp_arr[1000006];

/* 32k ints sorted in 3 seconds */

// keeps swapping each element from 0 to n-1, so that highest reaches n-1
// in next iteration does the same from 0 to n-2, so the next highest reaches n-2
// ...
int bubble(int arr[], int n) {

  for(int i = n - 1; i >= 1; i--) {

    for(int j = 0; j < i; j++) {

      if(arr[j] > arr[j + 1]) {
	int temp = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = temp;
      }
      
    }
    
  }

}

/* 32k ints sorted in 1.5 seconds */

// find the min element of arr[0..n-1] and put it in the a[0]
// find the min element of arr[1..n-1] and put it in the a[1]
// ...
int selection(int arr[], int n) {

  for(int i = 0; i < n-1; i++) {
    
    int min = i;

    for(int j = i + 1; j < n; j++) {

      if (arr[j] < arr[min])
	min = j;
      
    }

    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
            
  }
}

// insertion sort works like its working on an already sorted array
// consider for 5th element it checks the element agaist 
int insertion(int arr[], int n){

  for(int i = 0; i < n; i++) {

    int temp = arr[i];
    int j;
    
    for(j = i; j > 0 && arr[j-1] > temp; j--)
      arr[j] = arr[j-1];
    

    arr[j] = temp;
  }
  
}


void merge(int arr[], int start, int mid, int end) {

  int n = end - start + 1;

  int p = start;
  int q = mid + 1;
  
  for(int i = 0; i < n; i++) {

    if(p > mid) 
      tmp_arr[i] = arr[q++];
    else if(q > end)
      tmp_arr[i] = arr[p++];
    else if(arr[p] < arr[q])
      tmp_arr[i] = arr[p++];
    else
      tmp_arr[i] = arr[q++];
  }

  for(int i = 0; i < n; i++)
    arr[start + i] = tmp_arr[i];

  //  for(int i = 0; i < n; i++)
  //    cout << tmp_arr[i] << ' ';
  
  //cout << endl;
}

void merge_sort(int arr[], int start, int end) {
  if (start < end) {
    int mid = start + (end - start) / 2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, start, mid, end);
    
  }
}

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int partition(int arr[], int start, int end) {

  int p = start;
  int pval = arr[p];
  int li = start + 1;
  int gi = start + 1;

  while(gi <= end) {

    if(arr[gi] < pval) {
      swap(arr, li, gi);
      li++;
    }

    gi++;
  }

  swap(arr, p, li - 1);
  return li - 1;
}

int quick(int arr[], int start, int end) {
  if(start < end) {
    int piv_pos = partition(arr, start, end);
    quick(arr, start, piv_pos - 1);
    quick(arr, piv_pos + 1, end);
  }
}

int xmain() {

  //int arr[] = { 5, 4, 5, 2, 50, 3, 10 };

  int arr[] = {5, 4, 8, 2, 50, 3, 10};

  for(int i = 0; i < 7; i++)
    cout << arr[i] << ' ';
  cout << endl;
  
  quick(arr, 0, 6);

  //bubble(arr, 7);
  //selection(arr, 7);
  //insertion(arr, 7);
  //merge_sort(arr, 0, 6);

  
  for(int i = 0; i < 7; i++)
    cout << arr[i] << ' ';

  cout << '\n';
}



int main() {
  int n = 0;

  int x;

  while(cin >> x) {
    arr[n++] = x;
  }

  //bubble(arr, n);
  //selection(arr, n);
  //insertion(arr, n);
  //merge_sort(arr, 0, n-1);
  //quick(arr, 0, n-1);

  for(int i = 0; i < n; i++)
    cout << arr[i] << endl;  
  
  return 0;
}
