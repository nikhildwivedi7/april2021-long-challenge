#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double k1, k2, k3, v, res;
        cin >> k1 >> k2 >> k3 >> v;
        res = 100 / (k1 * k2 * k3 * v);
        double ans = round(res * 100.0) / 100.0;
        if (ans >= 9.58)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}