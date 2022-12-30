#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};
void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp= temp->next;
    }
    return false;
}
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* &head, int val){
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
node* marge(node* &head1, node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dumyNode=new node(-1);
    node* p3=dumyNode;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;

    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

      while(p1!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dumyNode->next;
}
int main()
{
    node* head=NULL;
    insertAtTail(head, 1) ;
    insertAtTail(head, 2) ;
    insertAtTail(head, 3) ;
    display(head);
    insertAtHead(head, 4);
    display(head);
    cout<<search(head, 3)<<endl;
    //deletion(head, 3);
    deleteAtHead(head);
    display(head);
    

return 0;
}
