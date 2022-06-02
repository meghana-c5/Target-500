#include<iostream>
#include<vector>
using namespace std;
 
#define fo(a,b,c) for(int a = b; a < c ; a++)
 
int main() 
{
 
    int arr[] = {6,3,9,5,2,8,7};

    // swap adjacent elements repeatedly
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int  i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j+1]);
        }
    }

    fo(i,0,n)
        cout<<arr[i]<<" ";
 
return 0;
   
}