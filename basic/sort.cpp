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
bool eof = false;

inline char getcharbuff() {
  if(charsleft == 0) {
    charsleft = fread(buffer, 1, SIZE, stdin);
    curIdx = 0;
  }

  if(charsleft == 0) {
    eof = true;
    return 0;
  }
  
  register char chr = buffer[curIdx++];
  charsleft--;
  
  return chr;
}

void fastscan(unsigned int &x) {
  register int c;

  if(eof)
    return;

  x = 0;
  c = getcharbuff();
  
  for(; (c > 47 && c < 58); c = getcharbuff())
    x = (x << 1) + (x << 3) + c - 48;
}



int main() {
  int q = 100000;
  unsigned int from[q];
  int x = 0;

  for(int i = 0; i < q; i++)
    for(int j = i + 1; j < q; j++)
      {
	from[i] = i;
      }
    
  for(int i = 0; i < q; i++) {
    std::cin >> from[i];
  }
 
  for(int i = 0; i < q; i++) {
    for(int j = i + 1; j < q; j++) {
      if(from[j] < from[i]) {
	//int t = from[i];
	//from[i] = from[j];
	//from[j] = t;
      }
    }
  }
  
  return 0;
}
