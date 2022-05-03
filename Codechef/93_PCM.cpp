#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string S;
        cin>>S;
        sort(S.begin(),S.end());
        
        if (S=="CMP")
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
	}
	return 0;
}