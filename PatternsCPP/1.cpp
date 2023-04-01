#include<iostream>
using namespace std;
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

int main()
{
    int i, j,n,m;       
    cout << "Enter row number: ";
    cin>>n;
    cout << "Enter colum number: ";
    cin>>m;
     
    for ( i = 1; i <= n; i++)
    {
        for (size_t j =1; j <= m; j++)
        {
            cout<<"* " ;
        }
        cout << "\n";
    }
    
 return 0; 
}