#include <iostream>
using namespace std;
int a[5];
int front=-1,rear=-1,n=5;

void insert(int val){
    if((front==0 && rear==n-1)||(front==rear+1)){
        cout<<"queue overflow";
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    else{
        if(rear==n-1){
            rear=0;
        }
        else{
            rear=rear+1;
        }
    }
    a[rear]=val;
}
void delet(){
    if(front==-1){
        cout<<"queue underflow"<<endl;
        return;
    }
    cout<<"element deleted from the queue is: "<<a[front]<<endl;
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        if(front==n-1){
            front=0;
        }
        else{
            front=front+1;
        }
    }
}
int main()
{
    insert(7);
    insert(2);
    insert(3);
    insert(4);
    delet();
return 0;
}