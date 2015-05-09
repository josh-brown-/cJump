#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    cout<< 20/1000;
    cin.get();
    srand(time(NULL));

    int flip = rand()%2;
    cout << "Flip number " << flip << "\n";

    if (flip==0)
        cout<<"Heads\n";
    else
        cout<<"Tails\n";
    main();

}
