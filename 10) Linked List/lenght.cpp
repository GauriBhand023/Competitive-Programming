/* Iterative C++ program to find length
 or count of nodes in a linked list*/
#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void push(Node** head_ref, int new_data){
	Node* new_node =new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
int getCount(Node* head){
	int count = 0; 
	Node* current = head; 
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}
int main()
{
	Node* head = NULL;
	push(&head, 1);
	push(&head, 3);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
	cout<<"count of nodes is: "<< getCount(head);
	return 0;
}
