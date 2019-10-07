//program to reverse a number
#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int n, reverse=0;
 cout<<"Enter the number : ";
 cin>>n;
 while(n>0)
 {
  reverse=reverse*10+n%10;
  n/=10;
 }
 cout<<"The reverse of the number is "<<reverse;
 getch ();
 return 0;
}