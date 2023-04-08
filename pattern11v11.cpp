#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // int count=1;

    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k <=n-i; k++)
        {
            cout<<" ";
        }
        for (int k = 1; k <=i; k++)
        {
            cout<<k<<" ";
        }
        
        cout<<endl;
    }
    
    
    

    return 0;
}