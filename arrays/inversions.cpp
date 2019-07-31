#include <iostream>

using namespace std;

int main() {
  int T;
  int i, j, p, q;

  cin >> T;

  while(T--) {
    int N;
    
    cin >> N;
    int M[N][N];

    for (i = 0; i < N; i++) {
      for(j = 0; j < N; j++) {
	cin >> M[i][j];
      }
    }

    int inversions = 0;

    for (i = 0; i < N; i++) {
      for(j = 0; j < N; j++) {
	for(p = i; p < N; p++) {
	  
	  for(q = j; q < N; q++) {
	    //cout << M[i][j] << " " << M[p][q] << " "  << (M[i][j] > M[p][q]) << endl;
	    if (M[i][j] > M[p][q])
	      inversions++;
	  }
	}
      }
    }

    cout << inversions << endl;
    
  }
  
  return 0;
}


/*

editorial code

#include<bits/stdc++.h>
using namespace std;
int mat[1010][1010];
int main(){	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ans = 0;
		for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++){
			cin>>mat[i][j];
			for(int i1=1; i1 <= i; i1++)
			for(int j1=1; j1 <= j; j1++)
				if(mat[i1][j1] > mat[i][j])ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

*/
