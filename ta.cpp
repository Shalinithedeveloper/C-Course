#include <iostream>
// #include<cmath>
using namespace std;

int main(){

    int salary = 10000;
    int da = salary*55/100;
    int ta = da*40/100;
    int hra = ta*30/100;
    int pf = salary*5/100;



    int net_salary = (salary + ta + da + hra) - pf;

    
    cout<<net_salary<<endl;

    return 0;
    
}

