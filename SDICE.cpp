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
        if (N <= 4)
        {
            res = solve(N);
        }
        else
        {
            levels = N / 4;
            extras = N % 4;
            res = (9 * 4 * levels) + 24 + solve(extras) - (6 * extras);
        }
        cout << res << endl;
    }

    return 0;
}