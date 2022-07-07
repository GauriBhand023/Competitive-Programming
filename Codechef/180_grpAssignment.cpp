#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int ass(int n)
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    string ans = "YES";
    for (auto it : mp)
    {
        if (it.second % it.first != 0)
        {
            ans = "NO";
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        ass(a);
    }
    return 0;
}