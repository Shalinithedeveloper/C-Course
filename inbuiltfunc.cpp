#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
   
    string str = "adchbsiaoi";

    //convert into uppercase

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
    
    return 0;
}