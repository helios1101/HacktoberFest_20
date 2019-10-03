// Author-Priyanshu Kumar
// Birla Institute of Technology, Mesra

#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
//using namespace boost::multiprecision;
//cpp_int
typedef long long int ll;
#define pb push_back
#define MOD 1000000007
#define vec vector<ll>

//sort(v.begin(), v.end());
//sort(v.begin(), v.end(),greater<int>());
//reverse(v.begin(), v.end());
//*max_element(v.begin(), v.end());
//*min_element(v.begin(), v.end());
//accumulate(v.begin(), v.end(), 0);
//count(v.begin(), v.end(), 20);
//find(first_iterator, last_iterator, x);
//lower_bound(first_iterator, last_iterator, x);
//upper_bound(first_iterator, last_iterator, x);
//distance(first_iterator,desired_position)
ll maxsum(ll a[],ll d,ll k)
{
    ll sum=0;
     for(ll i=0;i<k;i++)
            sum=sum+a[i];
     ll maxa=INT_MIN;
     maxa=max(sum,maxa);
     for(ll i=k;i<d;i++)
     {
        sum=sum+a[i]-a[i-k];
        maxa=max(sum,maxa);
     }
     return maxa;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll a[]={1,2,3,4,17,16,17,8,9,10,11};
    ll d= sizeof(a)/sizeof(a[0]);
    cout<<maxsum(a,d,3);
    return 0;
}

