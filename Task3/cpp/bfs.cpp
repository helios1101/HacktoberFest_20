#include<bits/stdc++.h>
using namespace std;
vector<int>v[10];int sum=0;
int visited[10];
void bfs(int x)
{
    queue<int> q;
    visited[x]=1;
    q.push(x);
    cout<<x;
    while(!q.empty())
    {
        int c=q.front();
        cout<<c<<"\n";
        q.pop();
        for(int j=0;j<v[c].size();j++)
        {
            if(visited[v[c][j]]==0)
            {
                sum=sum+v[c][j];
                q.push(v[c][j]);
                visited[v[c][j]]=1;
           }
    }

}
}
void intiliaze()
{
    for(int i=0;i<10;i++)
        visited[i]=0;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;int e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    intiliaze();
    bfs(1);
    cout<<sum;

return 0;
}
