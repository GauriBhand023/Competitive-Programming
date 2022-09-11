#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void arrange(int arr[], int n)
{
    int t[n];
    int s = 0;
    int large = n - 1;
    int flag = true;
    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            t[i] = arr[large--];
        }
        else
        {
            t[i] = arr[s++];
        }
        flag = !flag;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = t[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}