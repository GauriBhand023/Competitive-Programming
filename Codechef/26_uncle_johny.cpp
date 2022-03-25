#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, p, g, temp, coun = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> p;
        p--;
        g = arr[p];
        for (int x = 0; x < n; x++) {
            for (int j = x + 1; j < n; j++){
                if (arr[x] > arr[j]){
                    temp = arr[x];
                    arr[x] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int k = 0;
        while (k < n)
        {
            if (arr[k] == g)
            {
                break;
            }
            k++;
        }
        k++;
        cout << k << endl;
    }
}
