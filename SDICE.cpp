#include <iostream>
using namespace std;
int solve(long long X)
{
    if (X == 1)
        return 20;
    else if (X == 2)
        return 36;
    else if (X == 3)
        return 51;
    else if (X == 4)
        return 60;
    else if (X == 5)
        return 76;
    else if (X == 6)
        return 88;
    else if (X == 7)
        return 99;
    else if (X == 8)
        return 104;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N, res, levels, extras;
        cin >> N;
        if (N <= 8)
        {
            res = solve(N);
        }
        else
        {
            levels = N / 4;
            extras = N - (levels - 1) * 4;
            res = (levels - 1) * 11 * 4 + solve(extras);
        }
        cout << res << endl;
    }

    return 0;
}