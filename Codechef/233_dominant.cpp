#include <bits/stdc++.h>
using namespace std;

int sol()
{
    int n;
    cin >> n;
    vector<int> kka;
    map<int, int> mhu;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        mhu[j]++;
    }
    for (auto i : mhu)
    {
        kka.push_back(i.second);
    }

    if (kka.size() == 1)
    {
        cout << "YES" << endl;
        return 0;
    }
    sort((kka).begin(), (kka).end());
    if (kka[kka.size() - 1] > kka[kka.size() - 2])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

int main()
{
    int tg;
    cin >> tg;
    while (tg--)
        sol();
}