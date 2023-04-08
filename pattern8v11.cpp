#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // int count=1;

    for (int i = 1; i <=n; i++)
    {
        for (int  k = 1; k<=n+1-i; k++)
        {
           cout<<k<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}