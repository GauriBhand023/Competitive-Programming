#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b, c, ans;
        cin >> a >> b >> c;
        ans = a / 3;
        if (a % 3 == 0) {
            cout << a * b + c * (ans - 1)<<endl;
        }
        else {

            if (a > 3){
                cout << a * b + c * (ans)<<endl;
            }
            else{
                cout << a* b << endl;
            }
        }
    }
    return 0;
}