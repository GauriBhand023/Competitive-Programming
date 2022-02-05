#include <bits/stdc++.h>
using namespace std;

void Pattern(int n){
    int i,j,k=0;
    for(i=1; i<=n; i++){
        for(j=i; j<n; j++){
            cout<<" ";
        }
        while(k != (2*i-1)){
            if(k == 0 || k == 2*i-2)
               cout<<"*";
            else
               cout<<" ";
            k++;
        }
        k=0;
        cout<<endl;
    }
    for(i=0; i<2*n-1; i++){
        cout<<"*";
    }
}
int main()
{   
    int n = 6;
    Pattern(n);  
return 0;
}