// Quick sort
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp= *x;
    *x = *y;
    *y = temp;
}
int part(int *a, int y, int z){
    int h= a[y];
    int i= y, j= z;
    do{
        do{
            i++;
        }while(a[i]<= h);
        do{
            j--;
        }while(a[j]>h);
        if(i<j)
            swap( &a[i], &a[j]);
        
    }while(i<j);
    swap(&a[y], &a[j]);
    return j;
}
void quicksort(int *a, int l, int h)
{
    int i;
    if(l<h){
        i= part(a,l,h);
        quicksort(a,l,i);
        quicksort(a,i+1,h);
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
    cout<<"Printing sorted array :\n";
    quicksort(arr,0,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
return 0;
}