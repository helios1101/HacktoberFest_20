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
bool pairsum(ll a[],ll d)
{
    ll i=0;
    ll j=d-1;
    while(i<j)
    {
        if(a[i]+a[j]==29)
            return true;
        else if(a[i]+a[j]<29)
            i++;
        else
            j--;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll a[]={1,2,3,4,5,6,7,8,9,10};
   ll d=sizeof(a)/sizeof(a[0]);
   cout<<pairsum(a,d);
    return 0;
}
