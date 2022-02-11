#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int T,A,B,C,SL,UMax,UMin;
	cin>>T;
	for (int i=1;i<=T;i++)
	{
		UMax=0,UMin=0;
		cin>>A>>B>>C;
		UMax=max(max(A,B),C);
		UMin=min(min(A,B),C);
		SL=A+B+C-UMax-UMin;
		cout<<SL<<"\n";
	}
}
