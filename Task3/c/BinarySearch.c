//program to search an element in an array using binary search
#include<stdio.h>
#include<conio.h>
int Bsearch(int [], int, int); //Bsearch(the array, its size, search_element)
int main()
{
 int a[50], i, element, size, index;
 clrscr();
 printf("Enter the desired size of the array (max. 50) : ");
 scanf("%d", &size);
 printf("Enter the elements of the array in ascending order :\n");
 for(i=0; i<size; i++)
  scanf("%d", &a[i]);

 printf("Enter the element to be searched : ");
 scanf("%d", &element);
 index = Bsearch(a, size, element);
 if(index==-1)
  printf("Element not found! ");
 else
  printf("Element found at index %d and position %d", index, index+1);
 getch ();
 return 0;
}

int Bsearch(int ar[], int size, int element)
{
 int beg, last, mid;
 beg=0;
 last=size-1;
 while(beg<=last)
 {
  mid=(beg+last)/2;
  if(element==ar[mid])
   return mid;
  else if(element>ar[mid])
   beg=mid+1;
  else
   last=mid-1;
 }
 return -1;     //program control reaches here only when element is not found
}