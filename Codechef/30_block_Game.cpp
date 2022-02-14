#include <iostream>
using namespace std;

int main() {
	int num,rev,rem,n,temp;
    cin>>num;
    while(num--)
    {
        cin>>n;
        temp = n;
        rev=0;
        while(n!=0)
        {
            rem = n % 10;
            rev = (rev*10) + rem;
            n = n / 10;
        }
        if(temp==rev){
                cout<<"wins"<<endl;}
        else{
                cout<<"loses"<<endl;}
    }
	return 0;
}
