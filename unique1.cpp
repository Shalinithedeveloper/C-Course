#include<iostream>
using namespace std;

void unique(int arr[], int n){
    int xorsum = 0 ;
    for (int i = 0; i <n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    
    cout<<xorsum<<endl;
}
int main(){
   int arr[]= {1,2,3,1,3,4,2};
   
unique (arr, 7) ;


    
    return 0;
}