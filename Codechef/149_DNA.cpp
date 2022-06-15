#include <bits/stdc++.h>
using namespace std;

void D(char b, char c)
{
    if(b=='0' && c=='0')
      cout<<"A";
    else if(b=='0' && c=='1')
      cout<<"T";
    else if(b=='1' && c=='0')
      cout<<"C"; 
    else if(b=='1' && c=='1')
      cout<<"G";   
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        for(int j=0;j<n;j+=2)
        {
            D(a[j],a[j+1]);
        }
        cout<<"\n";
    }
    return 0;
}