#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> m,m1;
    //input using direct
    m['0']=1;
    m['1']=2;
    m['3']=3;
    m['4']=4;
    //end
    //input using inserting pair into the map
    m.insert(make_pair('a',25));// does not insert if already inserted
    m.insert(make_pair('b',250));
    m.insert({'f',1200});
    m.insert(make_pair('c',125));
    m.insert(make_pair('d',215));
    m1.insert(m.begin(), m.end());// inset from 1 map to another
    //end
    //printing the map using pointer iterator
    for(auto it=m.begin();it!=m.end();++it)
    {
        cout<<it->first<<" "<<it->second;
        cout<<"\n";

    }
    //end
    //map size
    cout<<"size of map "<<m.size()<<"\n";
    //end
    //max size of map
    cout<<"max size of map is "<<m.max_size()<<"\n";
    //end
    //empty
    cout<<m.empty()<<"\n";// return false or true as a return type
    //end
    //erase
    m.erase('1');// function erase the particular key return 1 if found else return 0
    auto it=m.find('f');

    m.erase(it);// the function does not return anything
    auto it1 =m.find('a');
    auto it2=m.find('c');  // remove upto c not c
    m.erase(it1,it2);
    // end
    m. clear();// clear all the content of map
    m.count(1);// return 0 if not present and 1 if present
    m.find(32); //return iterator position if found else return iterator of m.end();
    m.rbegin();// return the iterator of the last element of the map
    cout<<m1.at('c');// returns the value at a map
    swap(m1,m);// swap the map into one another
    return 0;
}
