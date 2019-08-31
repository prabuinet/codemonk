#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 1e5 + 5;

int a[MAX], fre[1000005], pre_m[MAX];
pair < int, int >p[MAX];

int
main ()
{
  //freopen(argv[1],"r",stdin);
  //freopen(argv[2],"w",stdout);
  int t;
  for (scanf ("%d", &t); t; --t) {
    int n;
    cin >> n;
    assert (n >= 1 and n <= 1e5);

    for (int i = 1; i <= 1e6; i++)
      fre[i] = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      assert (a[i] >= 1 and a[i] <= 1e6);
      fre[a[i]]++;
    }

    int k = 0;
    for (int i = 1; i <= 1e6; i++) {
      if (fre[i]) {
	p[k] = make_pair (i, fre[i]);
	if (k == 0) {
	  pre_m[k] = fre[i];
	}
	else {
	  pre_m[k] = min (pre_m[k - 1], fre[i]);
	}
	k++;
      }
    }

    sort (p, p + k);
    int ma = -1;

    for (int i = k - 1; i >= 0; i--) {
      if (p[i].second != pre_m[i]) {
	ma = max (ma, p[i].second - pre_m[i]);
      }
    }

    cout << ma << endl;

  }
  return 0;
}
