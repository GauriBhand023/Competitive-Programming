#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a;
        if (a <= 250000)
            b = a * 0;
        else if (a > 250000 && a <= 500000)
            b = (a - 250000) * 0.05;
        else if (a > 500000 && a <= 750000)
            b = (a - 500000) * 0.10 + 250000 * 0.05;
        else if (a > 750000 && a <= 1000000)
            b = (a - 750000) * 0.15 + 250000 * 0.15;
        else if (a > 1000000 && a <= 1250000)
            b = (a - 1000000) * 0.2 + 250000 * 0.3;
        else if (a > 1250000 && a <= 1500000)
            b = (a - 1250000) * 0.25 + 250000 * 0.5;
        else
            b = (a - 1500000) * 0.3 + 250000 * 0.75;
        cout << a - b << endl;
    }
}
