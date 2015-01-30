#include <iostream>
#include <string>

using namespace std;

int main() {

    int num1;
    int num2;
    cout << "Input num1 and num2 ";
    cin >>num1 >> num2;
    int op;
    cout<<"Choose 1 for addition, 2 for sub, 3 for mult, 4 for div\n";
    cin>> op;

    cout << "result is: ";
    if (op==1)
        cout << num1+num2;
    else if (op==2)
        cout << num1-num2;
    else if (op==3)
        cout << num1*num2;
    else
        cout << num1/num2;

return 0;
}
