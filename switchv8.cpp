#include<iostream>
using namespace std;

int main()
{
    // char button;
    // cout<<"input a character:";
    // cin>>button;

    // if (button=='a')
    // {
    //     cout<<"hello"<<endl;
    // }
    // else if (button=='b')
    // {
    //     cout<<"namaste"<<endl;
    // }
    // else if (button=='c')
    // {
    //     cout<<"hola"<<endl;
    // }
    // else if (button=='d')
    // {
    //     cout<<"salut"<<endl;
    // }
    // else if (button=='e')
    // {
    //     cout<<"ciao"<<endl;
    // }
    // else{
    //     cout<<"I am still learning more"<<endl;
    // }

    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"namaste"<<endl;
        break;
    case 'c':
        cout<<"hola"<<endl;
        break;
    case 'd':
        cout<<"salut"<<endl;
        break;
    case 'e':
        cout<<"ciao"<<endl;
        break;
    
    
    default: 
    cout<<"I am still learning more"<<endl;
        break;
    }

    return 0;
}