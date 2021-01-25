#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2020 == 0 || n % 2021 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n < 2020)
        {
            cout << "NO" << endl;
        }
        else
        {
            int x = n, y = n;
            while (x % 2020 != 0 && x > 2020)
            {
                x = x - 2021;
            }
            if (x < 2020)
                cout << "NO" << endl;
            else if (x % 2020 == 0)
                cout << "YES" << endl;
        }
    }
    return 0;
}