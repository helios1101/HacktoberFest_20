#include<bits/stdc++.h>
using namespace std;
void seive(long long int n)
{
    bool isprime[n+1];
    for(long long int i=1;i<=n;i++)
         isprime[i]=true;


    isprime[0]=false;
    isprime[1]=false;
    for(long long int i=2;i*i<=n;i++)
    {
        if(isprime[i]==true)
        {
            for(long long int j=i*i;j<=n;j=j+i)
            isprime[j]=false;
        }
    }

    for(long long int i=1;i<=n;i++)
    {
        if(isprime[i]==true)
        cout<<i<<"\n";
    }
}
int main()
{
    long long int n;
    cin>>n;
    seive(n);
    return 0;

}
