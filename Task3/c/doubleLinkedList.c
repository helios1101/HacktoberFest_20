#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* start = NULL;
struct node* end = NULL;


void insert(int data){
	struct node* new = malloc(sizeof(struct node));
	new -> right = NULL;
	new -> data = data;
	new -> left = NULL;

	if(start == NULL){
		start = new;
		end = new;
	}else if(start == end && start != NULL){
		start -> right = new;
		new -> left = end;
		end = new;
	}else{
		struct node* q = start;
		while(q -> right != NULL)
			q = q -> right;

		new -> left = end;
		q -> right = new;
		end = new;
	}

}


void display_start(){

	struct node* q = start;

	while(q != NULL){
		printf("%d  ", q -> data );
		q = q -> right;
	}
}

void display_end(){

	struct node* q = end;

	while(q != NULL){
		printf("%d  ", q -> data );
		q = q -> left;
	}
}


int main(int argc, char const *argv[])
{

	
	int n = 0;
	int data = 0;

	printf("=============Enter data into the link list==========\n");
	printf("=============Enter -1 to stop entering data=========\n");
	while(1){
		
		scanf("%d", &data);
		if(data != -1)
		insert(data);
		else
			break;
	}

	display_start();
	printf("\n");
	display_end();
	printf("\n");
	printf("1. \n");
	return 0;
}