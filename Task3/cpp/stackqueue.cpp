#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void showslack(stack<int>s)
{
    while(!s.empty())
    {
    cout<<s.top()<<"\n";
    s.pop();
    }
}
void showqueue(queue<int>q)
{

    while(!q.empty())
    {
        cout<<q.front()<<"\n";
        q.pop();
    }
}
int main()
{
   stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"the slack is:"<<"\n";
    showslack(s);
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"the queue is:"<<"\n";
    showqueue(q);
    return 0;
}
