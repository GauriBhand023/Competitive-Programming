#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main()
{
     int t;
     cin>>t;
     while (t--)
     {
         int x;
         cin>>x;
         ll solution = 0;
         vector<int>a(x),b(x);
         for(int &z: a) cin>>z;
         for(int &z: b) cin>>z;

         map<pair<int,int>,int> pre;
         for(int k=0;k<x;k++){
             solution += pre[{a[k],b[k]}];
             pre[{b[k],a[k]}]++;
         }
        cout<<solution<<endl;
     }
     
return 0;
}