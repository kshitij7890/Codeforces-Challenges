#include <bits/stdc++.h>
using namespace std;

bool PowerOfTwo(long long int x)
{
    return x && (!(x & (x - 1)));
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n == 3)
        {
            cout << "YES" << endl;
        }

        else if (PowerOfTwo(n))
        {
            //if(n==2) cout<<"NO"<<endl;
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}