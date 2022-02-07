/* C++ program to find n'th
node in linked list*/
#include <assert.h>
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
void push(Node** head_ref, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
int GetNth(Node* head, int index){

	Node* current = head;
	int count = 0;
	while (current != NULL) {
		if (count == index)
			return (current->data);
		count++;
		current = current->next;
	}
	assert(0);
}
int main()
{
	Node* head = NULL;
	push(&head, 1);
	push(&head, 4);
	push(&head, 1);
	push(&head, 12);
	push(&head, 1);
	cout << "Element at index 3 is " << GetNth(head, 3);
	return 0;
}

