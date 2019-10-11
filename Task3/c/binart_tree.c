#include<stdio.h>
#include<stdlib.h>


struct node{
	struct node* left;
	struct node* right;
	int data;
} ;

void inorder(struct node* root){

	if(root != NULL){

		inorder(root -> left);
		printf("%d ", root -> data);
		inorder(root -> right);
	}
}

void postorder(struct node* root){

	if(root != NULL){

		inorder(root -> left);
		
		inorder(root -> right);
		printf("%d ", root -> data);
	}
}
void preorder(struct node* root){

	if(root != NULL){

		printf("%d ", root -> data);
		inorder(root -> left);
		
		inorder(root -> right);
	}
}


struct node *inorder_successor(struct node *root){

	while(root -> left != NULL)
		root = root -> left;

	return root;
} 


//functon to delete a node
struct node *delete(struct node* head, int data){

	if(head == NULL) return head;

	else if(data < head -> data)
		head -> left = delete(head -> left, data);

	else if(data > head -> data)
		head -> right = delete(head -> right, data);

	else{


		if(head -> left == NULL){
			struct node* temp = head -> right;
			free(head);
			return temp;
		}else if(head -> right == NULL){
			struct node* temp = head -> left;
			free(head);
			return temp;
		}else{

			struct node* temp = inorder_successor(head -> right);

			head -> data = temp -> data;

			head -> right = delete(head -> right, temp -> data);
		}
	} 
	return head;	

}

struct node *insert(struct node* head, int data){

	struct node* new = (struct node *)malloc(sizeof(struct node));
	new -> data = data;
	new -> left = NULL;
	new -> right = NULL;


	if(head == NULL) return new;

	else if(data < head -> data)
		head -> left = insert(head -> left, data);
	else
		head -> right = insert(head -> right, data);

	return head;

	
}



int main(int argc, char const *argv[])
{
	int n = 0;
	struct node* head = NULL;
	int data = 0;
	while(1)
	{
		printf("Enter -1 to exit.\n");
		printf("Enter some value to insert it into tree:");
		scanf("%d", &data);

		if(data == -1)
			break;

		head = insert(head,data);
	}
	printf("\n");

	inorder(head);


	printf("1. Pre-order traversal.\n");
	printf("2. In-order traversal.\n");
	printf("3. Post-order traversal.\n");
	printf("4. Delete a node with a value x.\n");
	printf("5. Insert a node\n");


	while(1){

		scanf("%d", &data);
		switch(data){
			case 1: 
				preorder(&head);
				break;
			case 2:
				inorder(head);
				break;
			case 3:
				postorder(&head);
			case 4:
				scanf("%d", &n);
				head = delete(head,n);
				break;
			case 5:
				scanf("%d", &n);
				head = insert(head,n);
				break;
			default:
				printf("Enter valid input.\n");
				break;
		}
		printf("\n");	

	
	}
	printf("\n");
	return 0;
	
}
