// merge sort
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge (int *a, int l , int mid, int h){
    int i=l, k=l, j= mid+1;
    int * b= new int[h-l+1];
    while (i<=mid && j<=h)
    {
        if(a[i]<a[j]){
            b[k++]= a[i++];   
        }
        else 
            b[k++]= a[j++];
    }
    while(i <= mid)
    {
        b[k++]=a[i];
        i++;
    }
    while( j <=h  )
    {
        b[k++]=a[j];
        j++;
    }
    for (int i = l; i <=h; i++)
    {
        a[i]=b[i];
    }   
}
void merge_sort(int *a,int n){
    int mid,l,h,i,j;
    for (int j = 1; j <=n; j=j*2)
    {
        for (int i = 0; i<n-j+1; i+=j)
        {
            l=i;
            h=i+j-1;
            mid=(l+h)/2;
            merge(a,l,mid,h);
        }
        if((n-i)>j/2){
            l=i;
            h=i+j-1;
            mid=(l+h)/2;
            merge(a,l,mid,n-1);
        }
    }
    if(j/2 <n){
       merge(a,0,j/2-1,n-1);
    }
        
}
int main ()
{
    int n;
    cout<<"Enter the size of array :: "; cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,n);
    cout<<"Printing sorted array :\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
return 0;
}