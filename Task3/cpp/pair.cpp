#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;
bool sortbysec(const pair<int,int> &a , const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
   /* pair<int,int> pair1;
    pair1.first=10;
    pair1.second=20;
    system("pause");
    cout<<pair1.first<<"\n";
    cout<<pair1.second<<"\n";
    system("pause");
    pair<string,double> pair2("helloworld",2.54);
    cout<<pair2.first<<"\t"<<pair2.second<<"\n";
    system("pause");
    pair<int,int>pair3;
    pair3=make_pair(5,25);
    cout<<pair3.first<<"\t"<<pair3.second<<"\n";
    pair1.swap(pair3);*/

    //vector pair

    vector<pair<int,int>> v;
    int arr[]={1054,204,5430,040};
    int arr1[]={9100,2006,3004,4050};
    for(int i=0;i<4;i++)
    v.insert(v.begin(),make_pair(arr1[i],arr[i]));// v.push_back(make_pair(arr[i],arr1[i]));
    for(int i=0;i<4;i++)
     {
          cout<<v[i].first<<"\t"<<v[i].second<<"\n";
     }
     cout<<"\n\n";


     sort(v.begin(),v.end());//sorting by first
     for(int i=0;i<4;i++)
     {
          cout<<v[i].first<<"\t"<<v[i].second<<"\n";
     }
      cout<<"\n\n";


     sort(v.begin(),v.end(),sortbysec);//sorting by second element
     for(int i=0;i<4;i++)
     {
          cout<<v[i].first<<"\t"<<v[i].second<<"\n";
     }
    return 0;
}
