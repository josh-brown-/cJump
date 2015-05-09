#include <iostream>

using namespace std;

int main() {
    int red = 0;
    int green = 0;
    int blue = 0;
    int choice;
    while (choice!=0){
    cout << "Favorite color? Choose 1 for red, 2 for blue, 3 for green\n";
    cin >> choice;
        if (choice==1)
            red+=1;
        else if (choice==2)
            blue+=1;
        else if (choice==3)
            green+=1;
        else if (choice==0)
            cout<< "Poll results";
        else
            cout << "Invalid choice" ;
    }
    cout<< "red total: ";
    for (int i = 0; i<red; i++){
        cout<< "*";
    }

    cout<< "\nblue total: ";
    for (int i = 0; i<blue; i++){
        cout<< "*";
    }
    cout<< "\ngreen total: ";
    for (int i = 0; i<green; i++){
        cout<< "*";
    }

return 0;






}
