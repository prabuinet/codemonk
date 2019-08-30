#include <iostream>

using namespace std;


int arr[1000006];
int tmp_arr[1000006];
unsigned long long count = 0; // bad 

void merge(int arr[], int start, int mid, int end) {

  int n = end - start + 1;

  int p = start;
  int q = mid + 1;
  
  for(int i = 0; i < n; i++) {

    if(p > mid) {
      tmp_arr[i] = arr[q++];
      //cout << "p > mid" << endl;
    }

    else if(q > end) {
      tmp_arr[i] = arr[p++];
      //count++;
      //cout << "q > mid" << endl;
    }

    else if(arr[p] <= arr[q]) {
      tmp_arr[i] = arr[p++];
      //cout << "arr[p] < arr[q]" << endl;      
    }

    else {
      tmp_arr[i] = arr[q++];
      count += mid + 1 - p;
      //cout << "arr[p] > arr[q]" << endl;      
    }
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

int main() {

  int N;

  cin >> N;

  for(int i = 0; i < N; i++)
    cin >> arr[i];

  // for(int i = 0; i < N; i++)
  //   for(int j = i + 1; j < N; j++)
  //     if(arr[i] > arr[j])
  // 	count++;

  merge_sort(arr, 0, N - 1);
  cout << count << endl;
  
  return 0;
}
