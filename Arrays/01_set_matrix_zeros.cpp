#include<iostream>
#include<vector>
using namespace std;
 
#define fo(a,b,c) for(int a = b; a < c ; a++)

/*

Take two dummy array one of size of row and other of size of column.
Now traverse through the array.
If matrix[i][j]==0 then set dummy1[i]=0(for row) and dummy2[j]=0(for column).
Now traverse through the array again and 
if dummy1[i]==0  || dummy2[j]==0 then arr[i][j]=0,
else continue.

*/

void setZeroes(vector < vector < int > > &arr)
{
    int r = arr.size(), c = arr[0].size();

    vector < int > row(r,-1);
    vector < int > col(c,-1);

    fo(i,0,r)
        fo(j,0,c)
        {
            if(arr[i][j] == 0)
                row[i] = col[j] = 0;
        }

    fo(i,0,r)
        fo(j,0,c)
        {
            if(row[i] == 0 || col[j] == 0)
                arr[i][j] = 0;
        }
}

int main() 
{
 
    vector < vector < int > > arr;
    arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(arr);

    cout<<"The Final Matrix is "<<endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
 
return 0;
   
}