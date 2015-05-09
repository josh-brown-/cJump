#include <iostream>
#include <string>

using namespace std;

void enterName(string* first, string* last){
    cout << "Enter first name";
    cin >> *first;
    if (last!=NULL){
        cout<< "Enter last name";
        cin >> *last;
    }
}

int main (){
    string x;
    string y;
    string* a = &x;
    string* b = NULL;
    b = &y;
    enterName(a, b);

    cout<<x;
    cout<<y;
}

