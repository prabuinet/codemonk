#include <iostream>

using namespace std;

  
int main()
{
    int n, m;
    
    cin >> n >> m;

    int x = -1, v;
    
    for(int i=0; i < n; i++) {
	cin >> v;
	if (v == m)
	    x = i;
    }

    cout << (x + 1);
    
    return 0;
}



