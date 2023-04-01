#include<iostream>
using namespace std;
// * * * * * 
// * * * * 
// * * *   
// * *     
// *    

int main()
{  
    int i, j,n,m;       
    cout << "Enter row and colum number: ";
    cin>>n;
    
     
     for (int i = 1; i <= n; i++)
     {
         for (int j = n; j>= i ; j--)
         {
            if(j>i){
            cout<<"  ";
            continue;
            }
            else{
                cout<<"* ";
            }
         }
          cout<<endl;
     }
      
 return 0; 
}