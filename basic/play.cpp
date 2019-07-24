#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
#include <stdio.h>
#include <cstdlib>

#define SIZE 65535
char buffer[SIZE]; 
int charsleft = 0;
int curIdx = 0;

inline char getcharbuff() {
  if(charsleft == 0) {
    charsleft = fread(buffer, 1, SIZE, stdin);
    curIdx = 0;
  }
  
  register char chr = buffer[curIdx++];
  charsleft--;
  
  return chr;
}

void fastscan(unsigned int &x) {
  register int c;

  x = 0;
  c = getchar();
  
  for(; (c > 47 && c < 58); c = getchar())
    x = (x << 1) + (x << 3) + c - 48;
}


int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  unsigned int n, q;
  fastscan(n);
  fastscan(q);

  unsigned int arr[n];
  double sums[q];
  double sum = 0;

  for(int i = 0; i < n; i++) {
    fastscan(arr[i]);
    sum += arr[i];
    sums[i] = sum;
  }

  unsigned int l, r;

  for(int i = 0; i < q; i++) {
    fastscan(l);
    fastscan(r);
    l--;
    r--;
    double s;
    if(l == 0)
      s = sums[r];
    else
      s = sums[r] - sums[l - 1];
    std::cout << (unsigned long) std::floor(s / (r - l + 1)) << std::endl;
  }


  return 0;
}
