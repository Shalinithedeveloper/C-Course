#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
   
    string str = "ABCDEFGHIJKL";

    //convert into uppercase

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;
    
    return 0;
}