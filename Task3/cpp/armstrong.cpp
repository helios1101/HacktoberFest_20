Q. Write a program to check whether a number is an Armstrong number
Sol.
// Header file for input output functions 
#include <iostream>
using namespace std;
  
// main function - 
// where the execution of program begins 
int main()
{
  int a, n, rem, s = 0;
  cout << "Enter a positive  integer: ";
  cin >> a;
  n = a;
  while(n != 0)
  {
      rem = n % 10;
      s += rem * rem * rem;
      n /= 10;
  }
  if(s == a)
    cout << "The number " <<a << " is an Armstrong number.";
  else
    cout <<  "The number " <<a << " is not an Armstrong number.";
  return 0;
}
