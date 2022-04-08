#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;
    while(t--)  {
        int n,i;
        int count=1;
        cin>>n;
        string str;
        cin>>str;   
        for(i=1;i<n;i++) {
            if(str[i]!=str[i-1]){
                count+=1;
            }
        }
        cout<<(count)/2<<endl;
    }  
	return 0;
}
