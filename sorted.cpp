#include<iostream>
using namespace std;

bool sorted( int arr[], int n){
    if (n==1)
    {
        return true;
    }
    
    bool restarr=sorted(arr+1,n-1);
    if (arr[0]<arr[1]&& restarr)
    {
        return true;
    }
    return 0; 
}
int main(){
    int arr[]={1,6,3,4,5};
    

    cout << sorted(arr,5)<<endl;

    return 0;
}