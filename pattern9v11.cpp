#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // int count=1;

    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k <=i; k++)
        {
            if ((i+k)%2==0)
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    
    
    

    return 0;
}