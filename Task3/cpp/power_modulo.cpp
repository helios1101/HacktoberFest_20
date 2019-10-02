#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Function to return (a^n)%mod
ll power(ll a, ll n, ll mod) {
	// initialize p as 1 the result
	ll p = 1;
	while (n > 0) {
		// if n is odd multiply a to the result p
		if(n%2) {
			p = p * a; p %= mod;
		}
		// now n=n/2 
		n >>= 1;
		// change a to a^2
	       	a *= a; a %= mod;
	} 
	return p % mod;
}

int main(){
	
	return 0;
}

