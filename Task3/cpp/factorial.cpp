Q. To find factorial of a number

Sol.
//here is iterative solution to find factorial and can be improved by dp
//including header files
#include<bits/stdc++.h>
using namespace std;

// function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
    int res = 1, i; 
    for (i = 2; i <= n; i++) 
        res *= i; 
    return res; 
} 
  
// Driver code 
int main() 
{ 
    int num = 5; 
    cout << "Factorial of " << num << " is " << factorial(num) << endl; 
    return 0; 
} 

