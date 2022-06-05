#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a;
        cin >> a;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < a; i++)
        {
            int g = 0, l = 0;
            for (int j = 0; j < a; j++)
            {

                if (v[j] > v[i]){
                     g++;
                }
                   
                else if (v[j] <= v[i])
                {
                    l++;
                }
            }
            if (l > g){
                ans++;
            }
                
        }
        cout<<ans<<endl;
    }
    return 0;
}