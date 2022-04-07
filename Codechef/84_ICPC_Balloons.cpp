#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int countOfProblems = 0;

        for(int i = 0; i < n; i++){
            if(a[i] <= 7){
                countOfProblems = i + 1;
            }
        }

        cout << countOfProblems << endl;
    }

    return 0;
}
