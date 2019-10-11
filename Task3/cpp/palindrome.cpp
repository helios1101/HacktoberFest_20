Q. Palindrome number
Sol. A program that takes input a number in the range of signed integer and tells whether it is a palindrome number or not.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std /*To avoid using std::cin and std::cout at every instance*/
int main()
{
    int n;
    cin >> n;
    // Declared an integer variable and accepted a number from user in it
    int c=n; // Made copy of n
    int d=0;
    // A loop to reverse n in another variable d
    while(n>0)
    {
        int z= n%10; // Extracting last digit of number
        d= d*10 + z;
        n = n/10; // Reducing n by removing the last digit
    }

    if(d==c) // If reverse number is same as initial number
    {
        cout << "Palindrome number";
    }
    else
    {
        cout << " Not a Palindrome number";
    }
} // end main
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////