/*
Author : Kanjal Dalal
*/
#include<bits/stdc++.h>
using namespace std;

//C++ program to print all primes less than or equal to n using sieve
int main(){
	long long int n;
	cin >> n;
	// An array that stores whether the ith number is prime or not
	bool is_prime[n+1];
	// Initially marking all numbers as prime.
	memset(is_prime, true, sizeof(is_prime));
	// Sieve algo, That is starting from 2, if the number is prime mark all its multiples as not prime. This continues till square root of n since by then we would have marked all non prime numbers upto n as not prime. The numbers not marked would be prime.
	for(int i = 2; i*i <= n; i++){
		if(is_prime[i]){
			for(int j = i*i; j <= n; j += i){
				is_prime[j] = false;
			}
		}
	}
	// Now printing all numbers that are prime.
	for(int i = 2; i <= n; i++){
		if(is_prime[i]){
			cout << i << " ";
		}
	}
	return 0;
}

