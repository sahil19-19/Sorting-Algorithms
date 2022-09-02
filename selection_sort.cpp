// selection sort
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp= *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int *a, int n){
    int i,j,k;
    for ( i = 0; i < n-1; i++)
    {
        for (j=k=i ; j < n; j++)
        {
            if(a[j]<a[k]) k=j;
        }
        swap(&a[i], &a[k]);
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
    selection_sort(arr,n);
    cout<<"Printing sorted array :\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}