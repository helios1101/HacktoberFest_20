#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;

}* start;
void create_list(int data);
void insertend(int x);
void display();
void main()
{
	int i,n,data,x;
	//start==NULL;   another error
	start = NULL;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter data into %d node\n",i);
		scanf("%d",&data);
		create_list(data);
	}

	printf("enter the value of data to be entered into the new node\n");
	scanf("%d",&x);
	
	insertend(x);
	display();


}
void create_list(int data) //modification 1
{
	struct node* q,* temp;
	temp = malloc(sizeof(struct node));
	temp -> info = data;
	temp -> link = NULL;
	if(start==NULL)
		start=temp;
	else
	{
		q=start;
		while(q -> link !=NULL)
			q =q -> link;
		q -> link = temp;
	}


}
void insertend(int x) //modification 2
{
	struct node* q,* new;
	new=malloc(sizeof(struct node));
	new -> info = x;
	new -> link = NULL;
	if(start == NULL)
		start=new;
	else
	{
		q=start;
		while(q -> link!= NULL)
		{
			q = q -> link;
			// q -> link =new;//
		}                     //  
                              // actual error in your logic.
		q -> link = new;      //
	}

	
}
void display()
{
	struct node* new;
	new = start;
	while(new!=NULL)
	{
		printf("%d ",new-> info);//at least a space required.
		new = new -> link;
	}
	

	printf(".");

}