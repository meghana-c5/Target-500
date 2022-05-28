#include<iostream>
#include<vector>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    
    int  output = 1;
    for(int i = 0; i < n; i++)
    {
        for(int space = 1; space <= n-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                output = 1;
            else
                output = output*(i-j+1)/j;

            cout << output << "   ";
        }
        cout << "\n";
    }
 
 
return 0;
   
}