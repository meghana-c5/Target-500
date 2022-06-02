#include<iostream>
#include<vector>
using namespace std;
 
#define fo(a,b,c) for(int a = b; a < c ; a++)
 
int main() 
{
 
    int arr[] = {6,3,9,5,2,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    // select minimum from unsorted part and place it in sorted part

    for(int i = 0 ; i < n; i++ )
    {
        int min = arr[i];
        int min_index = i;

        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < min){
                min = arr[j];
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }

    fo(i,0,n)
        cout<<arr[i]<<" ";
 
return 0;
   
}