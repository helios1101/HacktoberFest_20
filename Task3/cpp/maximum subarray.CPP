#include<iostream>
#include<limits.h> //NEW
#include<stdlib.h>
#include<stdio.h>
#include<vector>
using namespace std;
int max(int a, int b) { return (a > b)? a : b; }

int max(int a, int b, int c) { return max(max(a, b), c); }

int maxcrosssubarraysum(vector<int>v,int l,int m,int h)
{
    int sum=0;
    int leftsum=INT_MIN;
    for(int i=m;i>=l;i--)
    {
        sum=sum+v[i];
        if(sum>leftsum)
        leftsum=sum;
    }
    sum=0;
     int rightsum=INT_MIN;//NEW
    for(int i=m+1;i<=h;i++)
    {
        sum=sum+v[i];
        if(sum>rightsum)
            rightsum=sum;
    }
    return leftsum+rightsum;

}
int  maxsubarraysum(vector<int>v,int l,int h)
{
    if(l==h)
        return v[l];
    int m=(l+h)/2;
    return max(maxsubarraysum(v,l,m),maxsubarraysum(v,m+1,h),maxcrosssubarraysum(v,l,m,h));

}
int main()
{
    vector<int>v{-3,1,2,5,-4,-9,-8,-7};
    int n=v.size();
    int vsum=maxsubarraysum(v,0,n-1);
    cout<<vsum;
    return 0;
}
