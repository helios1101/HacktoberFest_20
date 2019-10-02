#include<bits/stdc++.h>
using namespace std;
vector<int>v[10];
int visited[10];

void intiliaze()
{
    for(int i=0;i<10;i++)
    {
        visited[i]=0;
    }
}
void dfs(int x)
{
    visited[x]=1;
    for(int j=0;j<v[x].size();j++)
    {
        if(visited[(v[x][j])]==0)
        {
            dfs(v[x][j]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,e,counter=0,x,y;
    cin>>n>>e;
    for(int i=0;i<e;i++)
       {
           cin>>x>>y;
           v[x].push_back(y);
           v[y].push_back(x);
       }
       intiliaze();
       for(int i=1;i<=n;i++)
       {

           if(visited[i]==0)
           {

               dfs(i);
               counter++;
           }
       }
       cout<<counter;
return 0;
}
