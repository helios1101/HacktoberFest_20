#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// Author-Priyanshu Kumar
// Birla Institute of Technology, Mesra
int knapsack(ll w,ll val[],ll weg[],ll n)
{
    ll k[n+1][w+1];
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=w;j++)
        {
            if(i==0||j==0)
                k[i][j]=0;
            else if(weg[i-1]<=j)
                k[i][j]=max(val[i-1]+k[i-1][j-weg[i-1]],k[i-1][j]);
            else
                k[i][j]=k[i-1][j];


        }
    }
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=w;j++)
        {
            cout<<k[i][j]<<" ";
        }
        cout<<"\n";
    }
    return k[n][w];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll val[]={20,30,40};
    ll weg[]={10,20,30};
    ll n=sizeof(val)/sizeof(val[0]);
    ll w;
    cin>>w;
    cout<<knapsack(w,val,weg,n);
return 0;
}

