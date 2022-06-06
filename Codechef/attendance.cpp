#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                a++;
        }
        if (a > 30)
            cout << "FAIL" << endl;
        else
            cout << "PASS" << endl;
    }
    return 0;
}