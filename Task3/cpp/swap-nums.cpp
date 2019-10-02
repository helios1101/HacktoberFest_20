Q. Swap 2 numbers
Sol. //There are multiple methods to swap the values of 2 numbers

//METHOD 1: Using temperory variable
//Header file for input output functions
#include <iostream>

using namespace std;

//main function -
//where the execution of program begins
int main() {

  //variables
	int a,b;
  //creating temperory variable for storing values while swapping
	int temp;

  //taking input of values
	cin>>a>>b;

	temp=a;//store value of a in temp
	a=b;//assigning value of b to a
	b=temp;//assigning value of temp to b

  //print the values of a and b after swapping
  cout<<"After swapping: ";
	cout<<"a: "<<a<<", ";
	cout<<"b: "<<b;

	return 0;
}


//Method 2: using C++ library swap function
//header file that includes every standard library
#include<bits/stdc++.h>

using namespace std;

int main(){
  //variables
  int a,b;
  //taking input of values
  cin>>a>>b;
  //library function to perform swapping operation
  swap(a,b);

  //print the values of a and b after swapping
  cout<<"After swapping: ";
	cout<<"a: "<<a<<", ";
	cout<<"b: "<<b;

  return 0;
}


//Method 3: without using temperory variable (using arithmetic operators)

#include<bits/stdc++.h>
using namespace std;

int main(){
  //variables
  int a,b;
  //taking input of values
  cin>>a>>b;

  //performing swap operation
  a=a+b;
  b=a-b;
  a=a-b;

  //print the values of a and b after swapping
  cout<<"After swapping: ";
	cout<<"a: "<<a<<", ";
	cout<<"b: "<<b;

  return 0;
}


//Method 4: without using temperory variable (using Bitwise XOR)

#include<bits/stdc++.h>
using namespace std;

int main(){
  //variables
  int a,b;
  //taking input of values
  cin>>a>>b;

  //performing swap operation
  a=a^b; // x now becomes 15 (1111)
  b=a^b; // y becomes 10 (1010)
  a=a^b;

  //print the values of a and b after swapping
  cout<<"After swapping: ";
	cout<<"a: "<<a<<", ";
	cout<<"b: "<<b;

  return 0;
}
