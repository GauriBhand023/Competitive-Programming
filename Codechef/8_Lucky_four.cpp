#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
   int i;
	    cin >> i;
	    int count=0;
	    for(int j=i;j>0;){
	        if(j%10==4){
	            count=count+1;
	        }
	        j=j/10;
	    }
	    cout << count<< endl;
}
return 0;
}