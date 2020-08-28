#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,547,23,54,64,213,77,3,22,11,23,43,64,64,21,75};
    map<int,int>  m;
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)
    {
        auto it=m.find(a[i]);
        if(it==m.end())
        {
            m.insert({a[i],1});
        }
        else
        {
            int count=it->second+1;
            m.erase(it->first);
            m.insert({a[i],count});
        }
    }
    int curele,count=0,element=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second>count)
        {
            element=it->first;
            count=it->second;
        }
    }
    cout<<element<<" occurs "<<count<<" times\n";
    return 0;
}