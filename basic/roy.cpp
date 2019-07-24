#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int l, w, h, n;
  cin >> l;
  cin >> n;

  while(n--) {
    cin >> w;
    cin >> h;

    if(w < l || h < l)
      cout << "UPLOAD ANOTHER" << endl;
    else if(w >= l && h >= l) {
      if(w == h)
	cout << "ACCEPTED" << endl;
      else
	cout << "CROP IT" << endl;
    }
    
  }
  
  return 0;
}
