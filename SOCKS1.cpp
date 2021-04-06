#include <iostream>
using namespace std;

int main()
{
    int a, b, c, flag = 0;
    cin >> a >> b >> c;
    int arr[11] = {0};
    arr[a]++;
    arr[b]++;
    arr[c]++;
    for (int i = 1; i < 11; i++)
    {
        if (arr[i] > 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "NO";
    else
        cout << "YES";

    cout << endl;

    return 0;
}