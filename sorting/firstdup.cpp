#include <iostream>

using namespace std;

int abs(int x) {
  return x < 0 ? -x : x;
}

int firstDuplicate(int a[], int n) {
    for(int i=0; i < n; i++){
        int t = abs(a[i]);
        if(a[t - 1] < 0)
            return t;
        a[t - 1] = - a[t - 1];

	for(int j = 0; j < n; j++)
	  cout << a[j] << ' ';
	cout << endl;
    }
    return -1;
}


int main() {
  int a[] = {2, 1, 3, 5, 3, 2};
	for(int j = 0; j < 6; j++)
	  cout << a[j] << ' ';
	cout << endl;  
  firstDuplicate(a, 6);  
}
