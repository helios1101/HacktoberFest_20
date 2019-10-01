Q. You are given a sorted list of distinct n-1 integers.All integers are in range from 1 to n. One of the integers is missing in the list.
   Find the missing number ?
   
Sol.  

#include<iostream>                // Including the header file for input output functions
using namespace std;

// main function - 
// where the execution of program begins 

int main(){
	int n;
	cin >> n;                       // Input the range.
	int a[n-1];
	for(int i = 0; i<n-1; i++)      // Input the numbers except the missing number.
	cin >> a[i];

	int num = -1;
	for(int i = 0; i<n-2; i++){     
		if(abs(a[i] - a[i+1]) > 1){   // Check for the absolute difference of the consecutive elements which should be 1.
			num = a[i] + 1;             // If difference is 2 then missing element is found.
			break;
		}
	}
	if(num == -1){                 // If missing element was not found then it is either 1 or n.
		if(a[0] != 1)
		num = 1;
		else
		num = n;
	}

	cout << num;                  // Output the missing element.

	return 0;
}
