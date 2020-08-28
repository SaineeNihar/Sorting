#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &v,int low,int high)
{
    int pivot=v[low];
    int i=low;
    for(int j=low+1;j<high;j++)
    {
        if(v[j]<pivot)
        {
            i++;
            int tmp=v[i];
            v[i]=v[j];
            v[j]=tmp;
        }
    }
    int tmp=v[low];
    v[low]=v[i];
    v[i]=tmp;
    return i;
}
void QuickSort(vector<int> &v,int low,int high)
{
    if(low<high)
    {
        int mid=partition(v,low,high);
        cout<<endl<<mid;
        cout<<endl;
        for(int i=0;i<high-low+1;i++)
        cout<<v[i]<<" ";
        QuickSort(v,low,mid-1);
        QuickSort(v,mid+1,high);
    }
}/*
int partition(int a[], int l, int h)
{
    int pivot=a[l];
    int left=l,right=h;
    while(left<right)
    {
        while(a[left]<=pivot)
            left++;
           
        while(a[right]>pivot)
            right--;
        if(left<right)
            swap(a[left],a[right]);
    }
    swap(a[l],a[right]);
    return right;
}
int partition(int v[],int low,int high)
{
    int pivot=v[low];
    int i=low;
    for(int j=low+1;j<high;j++)
    {
        if(v[j]<pivot)
        {
            i++;
            int tmp=v[i];
            v[i]=v[j];
            v[j]=tmp;
        }
    }
    int tmp=v[low];
    v[low]=v[i];
    v[i]=tmp;
    return i;
}
void quickSort(int a[],int l, int h, int n)
{
    int index;
    for(int i=0;i<=h;i++)
    {
        if(a[i]==1)
        {
            index=i;
            break;
        }
    }
    swap(a[index],a[l]);
    int right=partition(a,l,h);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    cout<<right<<"right\n";
    for(int i=right;i<=h;i++)
    {
        if(a[i]==2)
        {
            index=i;
            break;
        }
    }
    swap(a[right],a[index]);
    partition(a,right,h);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}*/
int main()
{
    
    vector<int> a{0,1,1,0,1,2,1,2,0,0,0,1};
    int n=12;
    cout<<"Quick sort"<<endl;
    QuickSort(a,0,n);
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}