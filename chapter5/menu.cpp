#include <iostream>
using namespace std;

void poll() {
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
}

void beer() {

    int bottles = 99;
    while (bottles>0){
        cout << bottles << " bottles of beer on the wall, " << bottles << " bottles of beer, you take one down, pass it around, ";
        --bottles;
        cout << bottles << " bottles of beer on the wall.\n";
    }

}
void calc() {

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


}
 enum MenuOption{
        calculator,
        beerSong,
        barPoll
};

int main () {

cout<< "Input choice 1 for calc, two for beer, 3 for poll";
int choice;

cin>>choice;
    switch (choice){
    case calculator:
        calc();
        break;
    case beerSong:
        beer();
        break;
    case barPoll:
        poll();
        break;
    default:
        cout << "Wrong input restarting program";
        main();

    }
}
