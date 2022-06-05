#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin>>b;
        int arr[b];
        for (int i = 0; i < b; i++)
        {
            cin>>arr[i];
        }
        int last;
        last = arr[b-1];
        for(int i=b-1; i>0; i--){
            arr[i]=arr[i-1];
        }
        arr[0]=last;
        cout<<b-1+arr[0];
    }
    return 0;
}