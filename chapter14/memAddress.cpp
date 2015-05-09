#include <iostream>

using namespace std;

void makeTable(int** table, int dim ){
    for (int i = 0 ; i<dim; ++i){
       for (int j=0; j<dim; ++j){
            table[i][j] = i*j;
       }
    }
}


void printTable(int** table, int dim){
    for (int i = 0 ; i<dim; ++i){
       for (int j=0; j<dim; ++j){
            cout<<&table[i][j];
            cout<<"\n";
       }
       cout<<"\n";
    }
}




int main (){
    int dim;
    cout << "Input dim: ";
    cin >> dim;

    int**p_p_table;

    p_p_table = new int*[dim];

    for (int i = 0 ; i<dim ; ++i){
        p_p_table[i]= new int [dim];

    }

    makeTable(p_p_table, dim);
    printTable(p_p_table, dim);
}
