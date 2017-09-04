#include <iostream>

using namespace std;


int main() {
  int t;
  cin >> t;
  
  while(t--) {

    int arr[4][4];
    int nrX = 0, nrZ = 0;
    for(int i = 0; i < 4; i++) {
      for(int j = 0; j < 4; j++) {
	char x;
	cin >> x;
	if(x == 'x') {
	  nrX++;
	  arr[i][j] = 1;
	} else if(x == 'o') {
	  nrZ++;
	  arr[i][j] = -1;
	} else {
	  arr[i][j] = 0;
	}
      }   
    }

    /*
    for(int i = 0; i < 4; i++) {
      for(int j = 0; j < 4; j++) {
	cout << arr[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;
    */

    int winC;
    bool done = false;
    
    if(nrX == nrZ) { // game is started by batman
      winC = 2;
      if(nrX < 2) {
	cout << "NO" << endl;
	continue;
      }
    } else {
      winC = -2; // game is started by robin
      if(nrZ < 2) {
	cout << "NO" << endl;
	continue;
      }      
    }

    //cout << winC << endl;
    
    // check horiz
    for(int r = 0; !done && r < 4; r++) {
      for(int i = 0; i < 2; i++) {
	int sum = 0;
	for(int j = i; j < i + 3; j++) {
	  sum += arr[r][j];
	}
	if(sum == winC) {
	  done = true;
	  break;
	}
      }
      if(done)
	break;
    }

    // check vert
    for(int c = 0; !done && c < 4; c++) {
      for(int i = 0; i < 2; i++) {
	int sum = 0;
	for(int j = i; j < i + 3; j++) {
	  sum += arr[j][c];
	}
	if(sum == winC) {
	  done = true;
	  break;
	}
      }
      if(done)
	break;
    }

    if(arr[0][0] + arr[1][1] + arr[2][2]  == winC)
      done = true;
    else if(arr[0][1] + arr[1][2] + arr[2][3]  == winC)
      done = true;
    else if(arr[0][2] + arr[1][1] + arr[2][0]  == winC)
      done = true;
    else if(arr[0][3] + arr[1][2] + arr[2][1]  == winC)
      done = true;

    else if(arr[1][0] + arr[2][1] + arr[3][2]  == winC)
      done = true;
    else if(arr[1][1] + arr[2][2] + arr[3][3]  == winC)
      done = true;
    else if(arr[1][2] + arr[2][1] + arr[3][0]  == winC)
      done = true;
    else if(arr[1][3] + arr[2][2] + arr[3][1]  == winC)
      done = true;    
    
    
    if(!done)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
      
  }


  return 0;
}
