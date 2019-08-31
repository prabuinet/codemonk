#include <iostream>

using namespace std;

typedef long long ll;

ll arr[100005];
ll counts[1000006] = { 0 };
ll temp[100005];

void merge(int start, int mid, int end) {
  int p = start;
  int q = mid + 1;
  int i = 0;
  int n = end - start + 1;
  
  while(i < n) {
    if(q > end)
      temp[i++] = arr[p++];
    else if(p > mid)
      temp[i++] = arr[q++];
    else if(counts[arr[p]] <= counts[arr[q]])
      temp[i++] = arr[p++];
    else
      temp[i++] = arr[q++];
  }

  for(int j = 0; j < end-start+1; j++)
    arr[start + j] = temp[j];
}

void msort(int start, int end) {
  if(start < end) {
    int m = start + (end - start) / 2;
    msort(start, m);
    msort(m + 1, end);
    merge(start, m, end);
  }
}

void monitor() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
    counts[arr[i]]++;
  }

  // for(int i = 0; i < n; i++)
  //   cout << arr[i] << " ";
  // cout << endl;
  
  msort(0, n-1);
  
  // for(int i = 0; i < n; i++)
  //   cout << arr[i] << " ";
  // cout << endl;

  for(int i = n-1; i >= 0; i--) {
    for(int j = 0; j < i; j++) {
      if(arr[j] < arr[i] && (counts[arr[i]] - counts[arr[j]]) > 0) {
	cout << (counts[arr[i]] - counts[arr[j]]) << endl;
	return;
      }
    }
  }

  cout << 1 << endl;
}

int main() {
  int t;
  cin >> t;
  //  t = 1;
  
  while(t--)
    monitor();
  
  return 0;
}
