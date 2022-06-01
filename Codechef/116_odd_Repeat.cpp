#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    long int t, n, s, k, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> s;
        int sum = n * n;
        sum = s - sum;
        k--;
        long int ans = sum / k;
        cout << ans << endl;
    }
    return 0;
}
