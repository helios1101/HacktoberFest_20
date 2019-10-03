#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Author-Priyanshu Kumar
// Birla Institute of Technology, Mesra

ll  temp,x,y,d;
void gcd(ll a,ll b)
{
    if(b==0)
        {
           d=a;
           x=1;
           y=0;
        }
        else
            {
            gcd(b,a%b);
            temp=x;
            x=y;
            y=temp-(a/b)*y;
            }
}
int main()
{
   cout<<"ENTER THE NUMBER TO FIND GCD"<<"\n";
   ll a,b;
   cin>>a>>b;
   gcd(a,b);
   cout<<d<<" "<<x<<" "<<y;

return 0;
}

