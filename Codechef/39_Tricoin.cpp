#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int sum = 0,count = 0;
	    for(int i = 1; i<=n; i++){
	        sum +=i;
	        count++;
	        if(sum>n){
	            cout << count-1 << endl;
	            break;
	        }else if(sum == n){
	            cout << count << endl;
	            break;
	        }
	    }
	}
	return 0;
}
