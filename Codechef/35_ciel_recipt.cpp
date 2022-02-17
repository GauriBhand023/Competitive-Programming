#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        int price=2048,count=0;
        while(p>0)
        {
            count=count+(p/price);
            p=p%price;
            price=price/2;
        }
        cout<<count;
    }
    return  0;
}