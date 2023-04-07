#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // int count=1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++){
            cout<<"*"; 
            // count++ ;
        }
        int space = 2*n-2*i;
        for (int k = 1; k <= space; k++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++){
            cout<<"*"; 
            // count++ ;
        }
        
        cout<<endl;
    }
    
    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k <= i; k++){
            cout<<"*"; 
            // count++ ;
        }
        int space = 2*n-2*i;
        for (int k = 1; k <= space; k++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++){
            cout<<"*"; 
            // count++ ;
        }
        
        cout<<endl;
    }
    
    

    return 0;
}