#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10, 9, 8, 7, 4, 70, 60, 50}, k=4;
    int size=sizeof(a)/sizeof(a[0]);
    priority_queue<int,vector<int>,greater<int>> q;
    int i=0;
    for(;i<k;i++)
    q.push(a[i]);
    vector<int> v;
    //v.push_back(q.top());q.pop();
    for(;i<size;i++)
    {
        q.push(a[i]);
        v.push_back(q.top());q.pop();
    }
    while(!q.empty())
    {
        v.push_back(q.top());q.pop();
    }
    for(auto it:v)
        cout<<it<<" ";
    cout<<endl;
    return 0;
}