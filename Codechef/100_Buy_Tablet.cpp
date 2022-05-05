#include<iostream>
using namespace std;

int main(){
    int t,n,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        int w,h,p,k;
        int max=0;
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>w>>h>>p;
            int k=w*h;
            if(b>=p){
                
            
               if(k>max){
                   max=k;
               }    
        } 
    }
    if(max==0){
            printf("no tablet\n");
        }
        else{
            printf("%d\n",max);
        }
    }
    
    return 0;
}
