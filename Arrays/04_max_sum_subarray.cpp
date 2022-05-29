#include<iostream>
#include<vector>
using namespace std;
 
#define fo(a,b,c) for(int a = b; a < c ; a++)
 
int main() 
{
 
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};

    int sum = 0;
    int n = arr.size();
    int mx=INT_MIN;
    for(int i=0; i<n ; i++)
    {
        sum+=arr[i];

        mx = max(sum,mx);

        if(sum < 0)
            sum=0;
    }

    cout<<mx;
 
 
return 0;
   
}