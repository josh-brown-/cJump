#include <iostream>

using namespace std;

int main (){

    int pass;

    cout<< "Input password\n";
    cin>>pass;

    if (pass==1||pass==2 )
        cout << "Password valid";
    else
        cout<< "Password invalid";
}
