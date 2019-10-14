// Recursive C program to find length or count of nodes in a linked list 
#include<stdio.h> 
#include<stdlib.h> 

/* Link list node */
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 

/* Given a reference (pointer to pointer) to the head 
of a list and an int, push a new node on the front 
of the list. */
void push(struct Node** head_ref, int new_data) 
{ 
 	struct Node* new_node = 
			(struct Node*) malloc(sizeof(struct Node)); 

 	new_node->data = new_data; 

 	new_node->next = (*head_ref); 

 	(*head_ref) = new_node; 
} 
 
int getCount(struct Node* head) 
{ 
 	if (head == NULL) 
		return 0; 

 	return 1 + getCount(head->next); 
} 

 int main() 
{ 
 	struct Node* head = NULL; 

	/* Use push() to construct below list 
	1->2->1->3->1 */
	push(&head, 1); 
	push(&head, 3); 
	push(&head, 1); 
	push(&head, 2); 
	push(&head, 1); 

	/* Check the count function */
	printf("count of nodes is %d", getCount(head)); 
	return 0; 
} 
