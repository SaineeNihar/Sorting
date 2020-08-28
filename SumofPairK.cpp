#include<bits/stdc++.h>
using namespace std;
bool bsearch(int k, int a[],int low,int high)
{
    if(high>=low)
    {
        int mid=(low+high)/2;
        if(a[mid]==k)
            return true;
        if(a[mid]>k)
            return bsearch(k,a,low,mid-1);
        else
            return bsearch(k,a,mid+1,high);
    }
    return false;
}
int main()
{
    int a[]={33,12,43,31,54,12,54,435,875,82};
    int b[]={22,23,3452,4562,456,243,856,35,567,3};
    int k=55, size=10;
    sort(a,a+sizeof(a)/sizeof(a[0]));
    for(int i=0;i<size;i++)
    {
        int c=k-b[i];
        if(bsearch(c,a,0,size-1))
        {
            cout<<"found";
            break;
        }
    }
    return 0;
}