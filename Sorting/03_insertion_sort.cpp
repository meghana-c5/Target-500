#include<iostream>
#include<vector>
using namespace std;
 
#define fo(a,b,c) for(int a = b; a < c ; a++)
 
int main() 
{
 
    int arr[] = {6,3,9,5,2,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    // take first of unsorted part and place it in crct position of sorted part
    
    // Compare with all the elements in sorted sub-list.
    // Shift all the the elements in sorted sub-list that is greater than the value to be sorted

    for(int i = 1; i < n;i++){
        int value = arr[i];
        int j;
        for(j = i ; arr[j-1] > value ; j--){
            arr[j] = arr[j-1];
        }

        arr[j] = value;
    }

    fo(i,0,n)
        cout<<arr[i]<<" ";
 
return 0;
   
}