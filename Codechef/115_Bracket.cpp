#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; 
    cin>>t;
	while(t--)
	{
		string s; 
        cin>>s;
		stack<char> st;
		int mx=0;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='(') st.push('(');
			else st.pop();
			if(st.size()>mx) mx=st.size();
		}
		for(int i=0; i<mx*2; i++)
		{
			if(i<mx) cout<<'(';
			else cout<<')';
		}
		cout<<endl;
	}
}