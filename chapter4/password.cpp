#include <iostream>

using namespace std;

int main();

bool checkPass(int pass){
    if (pass==1||pass==2 ){
        cout << "Password valid";
        return true;
    }
    else{
        cout<< "Password invalid\n";
        main();
    }


}

int main (){

    int pass;

    cout<< "Input password\n";
    cin>>pass;
    if (checkPass(pass))
        return 0;

}
