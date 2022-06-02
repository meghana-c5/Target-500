#include<iostream>
#include<vector>
using namespace std;
 
#define fo(a,b,c) for(int a = b; a < c ; a++)

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];

    int i = l - 1;
     
    for(int j = l; j < r;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[r]);
    return (i+1);
}

void quickSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int pi = partition(arr,l,r);

        quickSort(arr,l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int main() 
{
 
    int arr[] = {6,3,9,5,2,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);

    fo(i,0,n)
        cout<<arr[i]<<" ";
 
return 0;
   
}