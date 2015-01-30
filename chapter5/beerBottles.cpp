#include <iostream>

using namespace std;

int main() {

    int bottles = 99;
    while (bottles>0){
        cout << bottles << " bottles of beer on the wall, " << bottles << " bottles of beer, you take one down, pass it around, ";
        --bottles;
        cout << bottles << " bottles of beer on the wall.\n";
    }
    return 0;
}
