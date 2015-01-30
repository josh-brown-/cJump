#include <iostream>
#include <string>

using namespace std;

int main() {
    int a1;
    int a2;

    cout << "Input user1 age:" << std::endl;
    cin>>a1;

    cout << "Input user2 age" << std::endl;
    cin >>a2;

    if (a1>a2){
        cout<< "User1 older";

    }
    else
        cout<< "user2 older";

    return 0;

}
