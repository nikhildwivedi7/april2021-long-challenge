#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 1, flag = 0;
        cin >> n >> k;
        char S[n];
        for (int i = 0; i < n; i++)
        {
            cin >> S[i];
        }

        for (int i = 0; S[i] != '\0'; i++)
        {

            if (S[i] == '*')
            {
                count = 1;
                while (S[i] == S[i + 1])
                {

                    if (count == k)
                    {
                        flag = 1;
                        break;
                    }
                    i++;
                    count++;
                }
                if (count == k)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}