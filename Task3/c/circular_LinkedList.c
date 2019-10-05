#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* link;
} *start;

void create(int data){

	struct node* new;

	 new = malloc(sizeof(struct node));
	
	if(start == NULL)
		start = new;

	new -> data = data;
	new -> link = start;



	struct node *q = start;

	while(q -> link != start)
		q = q -> link;

	q -> link = new;


}

void display()
{
	struct node *itr = start;
	if(start != NULL)
	{
		while(itr -> link != start)
		{
			printf("%d ", itr -> data );
			itr = itr -> link;
		}
		printf("%d", itr -> data );
	}
	else
	{
		printf("Nothing to DISPLAY !!\n");
	}

	printf("\n");
}


int main(int argc, char const *argv[])
{
	start = NULL;

	int n = 0, data = 0;

	printf("Enter the initial number of elements in the linked list:");

	scanf("%d", &n);
	
	for (int i = 0; i < n; ++i)
	{
		printf("Enter the value %d:", i + 1);
		scanf("%d", &data);

		create(data);
	}

	display();


	return 0;
}