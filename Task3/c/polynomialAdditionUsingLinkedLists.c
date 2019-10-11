#include<stdio.h>
#include<stdlib.h>

struct node{
	int coeff;
	int pow;
	int link;
};

struct node *newnode(int coeff, int pow){

	struct node* temp = (struct node *)malloc( sizeof(struct node));

	temp -> coeff = coeff;
	temp -> pow = pow;
	temp -> link = NULL;

	return temp;
}

struct node *create_node(struct node* head, int coeff, int pow){

	if(head == NULL) return newnode(coeff, pow);

	head -> link = create_node(head -> link, coeff, pow);

	return head;
}

void display(struct node* head){
	
		while(head != NULL){
			printf("(%d , %d) ",(head -> coeff),( head -> pow) );
			head = head -> link;
	
	}

}


struct node *poly_add(struct node* poly1, struct node* poly2, struct node* poly3 ){

	while(poly1 != NULL && poly2 != NULL){
		if( poly1 -> pow > poly2 -> pow){

			if(poly1 -> coeff != 0)
			poly3 = create_node(poly3, poly1 -> coeff , poly1 -> pow);
			poly1 = poly1 -> link;
		
		}else if( poly1 -> pow < poly2 -> pow){
			
			if(poly2 -> coeff != 0)
			poly3 = create_node(poly3, poly2 -> coeff , poly2 -> pow);
			poly2 = poly2 -> link;
		
		}else{
			if(poly1 -> coeff + poly2 -> coeff != 0)
			poly3 = create_node(poly3, poly1 -> coeff + poly2 -> coeff, poly1 -> pow);
			poly1 = poly1 -> link;
			poly2 = poly2 -> link;
		}
	}

	while(poly1 != NULL){
		if(poly1 -> coeff != 0)
		poly3 = create_node(poly3, poly1 -> coeff, poly1 -> pow);
		poly1 = poly1 -> link;
	}

	while(poly2 != NULL){
		if(poly2 -> coeff != 0)
		poly3 = create_node(poly3, poly2 -> coeff, poly2 -> pow);
		poly2 = poly2 -> link;
	}

	return poly3;

}

struct node *poly_mult(struct node*poly1,struct node* poly2,struct node* poly4){

	while(poly1 != NULL){
		struct node* temp = poly2;
		while(temp != NULL){

			if(poly1 -> coeff * temp -> coeff != 0)
			poly4 = create_node(poly4, poly1 -> coeff * temp -> coeff, poly1 -> pow + temp -> pow);
			temp = temp -> link;
		}

		poly1 = poly1 -> link;
	}

	return poly4;

}

int main(int argc, char const *argv[])
{
	int coeff = 0, pow = 0;
	struct node* poly1 = NULL;
	struct node* poly2 = NULL;
	struct node* poly3 = NULL;
	struct node* poly4 = NULL;

	printf("====Enter polynomial 1, in decreasing order of power====\n");
	int i = 0;
	while(i < 5){
		i++;
		printf("coeff:");
		scanf("%d", &coeff);
		printf("pow:");
		scanf("%d", &pow);

		poly1 = create_node(poly1, coeff, pow);
	}

	display(poly1);
	printf("====Enter polynomial 2, in decreasing order of power====\n");
	i = 0;
	while(i < 5){
		i++;
		printf("coeff:");
		scanf("%d", &coeff);
		printf("pow:");
		scanf("%d", &pow);

		poly2 = create_node(poly2, coeff, pow);
	}
	display(poly2);

	printf("\n==addition under process==\n");

	poly3 = poly_add(poly1, poly2, poly3);
	printf("\n");
	display(poly3);

	printf("\n==multiplication under process==\n");

	poly4 = poly_mult(poly1, poly2, poly4);
	printf("\n");
	display(poly4);	
	return 0;
}