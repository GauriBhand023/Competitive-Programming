#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int h, m, a, b, c, d, count = 0, count1 = 0, count2 = 0, count3 = 0;
        cin >> h >> m;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < m; j++){
                a = i / 10;
                b = i % 10;
                c = j / 10;
                d = j % 10;

                if (b != 0 && d != 0)
                {
                    if (a == 0 && b == c&&c == d)  {
                        count++;
                    }
                    else if (c == 0 && a == b&&b == d)  {
                        count++;
                    }
                    else if (a == b&&b == c&&c == d) {
                        count++;
                    }
                    else if (a == 0 && c == 0 && b == d)  {
                        count++;
                    }
                }
            }
        }
        cout << count+1 << endl;
    }
    return 0;
}
