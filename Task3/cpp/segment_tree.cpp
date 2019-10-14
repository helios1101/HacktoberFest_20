#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll tree[2000005];
//tree is build for the range sum of array
void build(ll node,ll start,ll end,ll a[])
{
    if(start==end)
        //leaf
        tree[node]=a[start];
    else
    {
        ll mid=(start+end)/2;
        build(2*node,start,mid,a);
        build(2*node+1,mid+1,end,a);
        tree[node]=tree[2*node+1]+tree[2*node];
    }
}
// update function is implemented to update the tree according to the change and reflect back on the tree
void update(ll node,ll start, ll end , ll a[],ll idx,ll val)
{
    if(start==end)
    {
        a[idx]=val;
        tree[node]=val;
    }
    else
    {
        ll mid=(start+end)/2;
        if(idx>=start && idx<=mid)
        {
            update(2*node,start,mid,a,idx,val);
        }
        else
        {
            update(2*node+1,mid+1,end,a,idx,val);
        }
        tree[node]=tree[2*node+1]+tree[2*node];
    }
}
// query function is implemented to return sum over a given range
ll query(ll node,ll start,ll end, ll l, ll r)
{
    if(l>end || r<start)
        return 100000;
    else if(l<=start && r>=end)
        return tree[node];
    else
    {
        ll mid= (start+end)/2;
        ll p1,p2;
        return query(2*node,start,mid,l,r)+query(2*node+1,mid+1,end,l,r);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,q,i;
    cin>>n>>q;
    ll a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    build(1,1,n,a); //builds the segment tree for the array a
    return 0;
}
