#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;int result=0;
	    cin>>s;
	    for(int i=0;i<s.length();i++)
	    {
	        if(isdigit(s[i]))
	        result=result+s[i]-'0';
	    }
	    cout<<result<<endl;
	}
	return 0;
}