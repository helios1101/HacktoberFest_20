#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{
  /*  vector <int> v {3,5,6,9,8,6};
    vector<long long int> v1;
    cout<<v1.max_size()<<"\n";
    cout<<v.max_size()<<"\n";                                  //v.data() returns pointer of first variable of vector
    v.insert(v.end(),5);//important
    v.resize(11);
    if(!v.empty())
    {
        for(int i=0;i<=v.size();i++)
        cout<<v[i]<<"\n";
    }
  cout<<v.front()<<"\n";
  cout<<v.back()<<"\n";
  cout<<v.at(2)<<"\n";
  cout<<v.capacity();
  v.push_back(9);//important
  cout<<v.back();*/

  //2D VECTOR
 vector<vector<int>>v {{1,2,3},{4,5,6}};
 for(int i=0;i<v.size();i++)
 {
     for(int j=0;j<v[i].size();j++)
     {
         cout<<v[i][j];
     }
     cout<<"\n";
 }


 //2D VECTOR WITH  A TYPE OF DYNAMIC INITILLIZATION

 int row=5;
 int cl[]={1,2,3,4,5};
 vector<vector<int>>v1(row);
 for(int i=0;i<5;i++)
 {
 v1[i]=vector<int>(cl[i]);
 for(int j=0;j<cl[i];j++)
    v1[i][j]=j+1;
 }

for(int i=0;i<v1.size();i++)
 {
     for(int j=0;j<v1[i].size();j++)
     {
         cout<<v1[i][j];
     }
     cout<<"\n";
 }




  return 0;
}
