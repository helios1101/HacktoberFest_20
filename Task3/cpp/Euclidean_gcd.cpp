#include <bits/stdc++.h> 

using namespace std; 
  
// Function to return  gcd of two numbers a and b
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Driver Code 
int main() 
{ 
    int a, b;
    cout<<"Enter any 2 numbers to find their gcd: ";
    cin>>a>>b;
    
    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl; 
    return 0; 
} 
