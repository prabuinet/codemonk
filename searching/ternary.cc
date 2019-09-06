#include <iostream>
#include <math.h>

using namespace std;

static double func(double x)
{
    return 2 * x * x + (-12) * x + 7;
}


static double ts(double start, double end)
{
    double l = start, r = end;

    for (int i = 0; i < 200; i++)
    {
        double l1 = (l * 2 + r) / 3;
        double l2 = (l + 2 * r) / 3;
        double v1 = func(l1);
        double v2 = func(l2);
        if (v1 < v2) r = l2; else l = l1;
    }

    double x = l;
    return func(x);
}

int main() {
    int n, x, y;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        cout << (long long) floor(ts(x, y)) << endl;
    }
    
    return 0;
}
