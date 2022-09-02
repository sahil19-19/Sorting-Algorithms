// insertion sort
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp= *x;
    *x = *y;
    *y = temp;
}
void insertion_sort(int * a, int n){
    int i,j,x;
    for (i=1;i < n ;i++)
    {
        j=i-1;
        x=a[i];
        while (j>-1 && a[j]>x)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=x;
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
    insertion_sort(arr,n);
    cout<<"Printing sorted array :\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
return 0;
}