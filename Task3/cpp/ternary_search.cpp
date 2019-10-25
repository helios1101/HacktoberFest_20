//Ternary search
#include<iostream>
using namespace std;
int ternary_search(int a[], int l, int h, int x)
{
   int mid1,mid2;
   if (l <= h)
      {
         mid1 = l + (h - l)/3;
         mid2 = h - (h - l)/3;
        if (x == a[mid1])
            return mid1;
        if (x == a[mid2])
            return mid2;
        if ( x < a[mid1])
            return ternary_search(a, l, mid1-1, x);
        else if ( x > a[mid2])
            return ternary_search(a, mid2+1, h, x);
        else
            return ternary_search(a, mid1+1, mid2-1, x);
     }
  return -1;
}

int main()
{
   int n,i,x;
   cout<<"Enter the size of array ";
   cin>>n;
   int a[n];
   cout<<"Enter the elements of array in sorted order ";
   for(i=0;i<n;i++)
      cin>>a[i];
   cout<<"Enter the element to be searched ";
   cin>>x;
   int index = ternary_search(a, 0, n-1, x);
   if(index == -1)
      cout<<"Element not found ";
   else
        cout<<"Element found at index "<< index;
   return 0;
}
