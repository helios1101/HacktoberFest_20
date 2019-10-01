Q. Fibbonacci Series [ o(1) time ]
Sol. 
// C++ program to count Fibonacci numbers in given range 
#include <bits/stdc++.h> 
using namespace std; 

// Returns count of fibonacci numbers in [low, high] 
int countFibs(int low, int high) 
{ 
	// Initialize first three Fibonacci Numbers 
	int f1 = 0, f2 = 1, f3 = 1; 

	// Count fibonacci numbers in given range 
	int result = 0; 

	while (f1 <= high) 
	{ 
		if (f1 >= low) 
		result++; 
		f1 = f2; 
		f2 = f3; 
		f3 = f1 + f2; 
	} 

	return result; 
} 

// Driver program 
int main() 
{ 
int low = 10, high = 100; 
cout << "Count of Fibonacci Numbers is "
		<< countFibs(low, high); 
return 0; 
} 
