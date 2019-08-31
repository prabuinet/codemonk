#include <iostream>
#include <cmath>

using namespace std;

typedef long long ull;

ull arr[1000006];
ull weights[1000006];
ull temp[1000006];
ull temp_wieghts[1000006];

ull weight(ull x, int i) {
  int from = 5 * i, to = 1 + 5 * (i - 1);
  //  cout << from << " " << to << endl;
  
  int res = 0;
  int np = 0;
  for(int place = to; place <= from; place++) {
    ull p = pow(10, place - 1);
    if(p < x)
      res += ((ull) (x / p) % 10) * pow(10, np++);
  }
  
  return res;
}

bool calc_weights(ull arr[], int n, int w) {
  int has_value = false;

  for(int i = 0; i < n; i++) {
    weights[i] = weight(arr[i], w);
    if(weights[i] != 0)
      has_value = true;
  }
  
  return has_value;
}

void merge(ull arr[], int start, int end, int mid) {
  int p = start;
  int q = mid + 1;
  int i = 0;

  while(p <= mid || q <= end) {
    if(p > mid) {
      temp_wieghts[i] = weights[q];
      temp[i++] = arr[q++];      
    }
    else if (q > end) {
      temp_wieghts[i] = weights[p];      
      temp[i++] = arr[p++];
    }
    else {
      if(weights[p] <= weights[q]) {
	temp_wieghts[i] = weights[p];      
	temp[i++] = arr[p++];
      }
      else {
	temp_wieghts[i] = weights[q];      
	temp[i++] = arr[q++];
      }
    }
  }
  
  for(int j = 0; j < i; j++) {
    arr[start + j] = temp[j];
    weights[start + j] = temp_wieghts[j];
  }
}

void mergesort(ull arr[], int start, int end) {
  //cout << start << " " << end << endl;
  if (start < end) {
    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, end, mid);
  }
}

void do_sorting(ull arr[], int n) {
  int i = 1;

  while(true) {
    bool has_value = calc_weights(arr, n, i++);
    if(!has_value)
      break;
    mergesort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
      cout << arr[i] << " ";
    cout << endl;
  } 
}


int main() {
  int n = 3;
  cin >> n;

  //ull arr[] = { 213456789, 167890, 123456789 };
  //arr[0] = 213456789;
  //arr[1] = 167890;
  //arr[2] = 123456789;

  for(int i = 0; i < n; i++)
    cin >> arr[i];
  
  // calc_weights(arr, n, 1);
  // for(int i = 0; i < n; i++)
  //   cout << weights[i] << " ";
  
  // mergesort(arr, 0, 2);
  // cout << endl;
  // for(int i = 0; i < n; i++)
  //   cout << arr[i] << " ";

  // cout << endl;
  // calc_weights(arr, n, 2);
  // for(int i = 0; i < n; i++)
  //   cout << weights[i] << " ";
  
  // mergesort(arr, 0, 2);
  // cout << endl;
  
  // for(int i = 0; i < n; i++)
  //   cout << arr[i] << " ";

  // cout << "\n";
  
  do_sorting(arr, n);

  
  return 0;
}
