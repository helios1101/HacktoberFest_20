#include<bits/stdc++.h>
#include <time.h>
using namespace std;
#define MOD 1000000007
#define ll long long int 
#define lld long double
#define pb push_back
#define mll map<ll,ll>
#define pll pair<ll, ll>
#define vll vector<ll>
#define vld vector<ld>
#define vpll vector<ppl>
#define ff first
#define ss second
#define endl "\n"
#define fastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define test ll t;cin>>t;while(t--)
#define fori(i,k,n) for(ll i=k;i<=n;i++)
#define rfor(i,n,k) for(ll i=n;i>=k;i--)
#define forc(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define all(x) x.begin(),x.end()
#define lb(v,val)  (lower_bound(all(v),val)-v.begin())
#define ub(v,val)  (upper_bound(all(v),val)-v.begin())
ll gcd(ll a,ll b){if(a==0){return b;}return gcd(b%a,a);}
ll lcm(ll a,ll b){ return (a*b)/gcd(a,b); }

ll powlm(ll a , ll b , ll m)
{
	if(a==1 || b==0)
	return 1;
	else if(b%2==0)
	return powlm((a*a)%m,b/2,m);
	else
	return (a*powlm((a*a)%m,b/2,m))%m;
}
//only for mod by prime
ll modinv(ll n, ll m) { return powlm(n, m - 2, m); }

ll binsea(vll a,ll l,ll r,ll x)
{
    ll mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==x)
        return mid;
        if(a[mid]<x)
        l=mid+1;
        else
        r=mid-1;        
    }
    return -1;
}

ll fact[1000000];
ll nCrMp(ll n , ll r , ll m)
{
	if (r == 0) 
        return 1; 
        
    return (fact[n] * ( modinv(fact[r], m) % m ) * ( modinv(fact[n - r], m) % m )  ) % m; 
} 

int main()
{
fastIO

test{
	
}
return 0;

}