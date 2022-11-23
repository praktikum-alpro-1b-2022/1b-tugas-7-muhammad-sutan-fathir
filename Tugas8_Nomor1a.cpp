#include <iostream>
using namespace std;

int main(){
    int i, j, matriks1[2][3], matriks2[2][3], hasilmatriks[2][3];

    cout << "============================" << endl;
    cout << "Operator Penjumlahan Matriks" << endl;
    cout << "============================" << endl << endl ;

    cout << "Matriks 1 dan Matriks 2" << endl;
    cout << "======================" << endl;
    cout << "|angka1|angka2|angka3|" << endl;
    cout << "|angka4|angka5|angka6|" << endl;
    cout << "======================" << endl << endl;

    cout << "Masukkan 6 bilangan: " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin >> matriks1[i][j];
        }
    }

    cout << "Masukkan 6 bilangan: " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin >> matriks2[i][j];
        }
    }

    cout << "Hasil penjumlahan dari 2 matriks tersebut adalah: " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            hasilmatriks[i][j]= matriks1[i][j]+matriks2[i][j];
            cout << "["<< i <<"]["<< j <<"]" <<"= "<< hasilmatriks[i][j] << endl;
        }
    }

    return 0;
}
