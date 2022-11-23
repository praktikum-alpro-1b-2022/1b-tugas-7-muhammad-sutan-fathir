#include <iostream>
using namespace std;

int main(){
    int i, j, matriks[2][3], transpose[3][2];

    cout << "==========================" << endl;
    cout << "Operator transpose Matriks" << endl;
    cout << "==========================" << endl << endl;

    cout << "Matriks 1" << endl;
    cout << "|====================|" << endl;
    cout << "|angka1|angka2|angka3|" << endl;
    cout << "|angka4|angka5|angka6|" << endl;
    cout << "|====================|" << endl << endl;

    cout << "Transpose matriks 1" << endl;
    cout << "|=============|" << endl;
    cout << "|angka1|angka4|" << endl;
    cout << "|angka2|angka5|" << endl;
    cout << "|angka3|angka6|" << endl;
    cout << "|=============|" << endl << endl;

    cout << "Masukkan 6 bilangan: " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin >> matriks[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            transpose[j][i]=matriks[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++)
            cout << "["<< i <<"]["<< j <<"]" <<"= "<< transpose[i][j] << endl;
    }
    return 0;
}
