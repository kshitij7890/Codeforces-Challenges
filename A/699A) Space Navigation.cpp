#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        //vector<string> str;
        string s;
        cin >> x >> y;
        cin >> s;
        //str.push_back(s);
        int countR = 0, countU = 0, countL = 0, countD = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'U')
                countU++;
            if (s[i] == 'L')
                countL++;
            if (s[i] == 'R')
                countR++;
            if (s[i] == 'D')
                countD++;
        }

        if (x > 0 && y > 0)
        {
            if (countR >= abs(x) && countU >= abs(y))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (x > 0 && y < 0)
        {
            if (countR >= abs(x) && countD >= abs(y))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (x < 0 && y > 0)
        {
            if (countL >= abs(x) && countU >= abs(y))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (x < 0 && y < 0)
        {
            if (countL >= abs(x) && countD >= abs(y))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}