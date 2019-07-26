#include <iostream>

using namespace std;

bool isPowerOfTwo(int x)
{
  if(x == 0)
    return false;
  else
    {
      while(x % 2 == 0) x /= 2;
      return (x == 1);
    }
}

void showBits(int x) {
  int i = 8;
  int mask = 1 << 7;

  cout << x << ": ";
  
  while(i--) {
    cout << ((x & mask) > 0);
    mask = mask >> 1;
  }
  
  cout << endl;
}

bool isPowerOfTwoBin(int x) {

  // this does the trick
  //!(x & (x - 1))

  //extra and with x is to check x is 0
  
  return (x && !(x & (x - 1)));
}


bool countBits(int x) {
  int count = 0;
  while(x) {
    showBits(x);
    x = x & (x - 1);
    count ++;
  }

  return count;
}


void possibleSubsets(char A[], int N)
{
  for(int i = 0;i < (1 << N); ++i)
    {
      for(int j = 0;j < N;++j) {
	showBits(i);
	showBits(j);
	showBits(i & (1 << j));
	cout << endl;
	//if(i & (1 << j))
	//cout << A[j] << ' ';
      }
      cout << endl;
    }
}


int main() {
  
  //cout << isPowerOfTwoBin(128) << endl;

  /*
  showBits(150);
  showBits(149);
  showBits(148);
  showBits(147);
  showBits(128);  
  showBits(127); 
  showBits(64);
  showBits(63);
  showBits(16);
  showBits(15);
  */
  
  //countBits(148);
  char A[] = {'a', 'b', 'c'};
  possibleSubsets(A, 2);
  cout << sizeof(int);

  int i { 20 };
  cout << endl << i << endl;
}
