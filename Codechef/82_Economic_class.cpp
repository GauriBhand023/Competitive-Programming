#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
	    int N;
	    cin >> N;
	    int S[N],D[N];
	    for(int i = 0; i < N; i++) 
            cin >> S[i];
	    for(int i = 0; i < N; i++) 
            cin >> D[i];
	    int cnt = 0;
	    for(int i = 0; i < N; i++) if((S[i] - D[i]) == 0) cnt++;
	    cout << cnt << "\n";
	}
	return 0;
}
