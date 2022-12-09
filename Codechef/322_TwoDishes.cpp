#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, s;
	    cin >> a >> s;
	    if(a >= s){
	        cout << s << endl;
	    }
	    else{
	        cout << 2 * a - s << endl;
	    }
	}
	return 0;
}
