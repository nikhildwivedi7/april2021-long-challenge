#include <iostream>
using namespace std;

int main()
{
    int a, b, c, flag = 0;
    cin >> a >> b >> c;
    if (a == b && a == c)
        cout << "YES";
    else if (a == b || a == c || b == c)
        cout << "YES";
    else
        cout << "NO";

    cout << endl;

    return 0;
}