#include <iostream>
using namespace std;

int main(){
    int i, j, matriks1[2][3], matriks2[3][2], hasilmatriks[2][2], jumlah=0;

    cout << "==========================" << endl;
    cout << "Operator Perkalian Matriks" << endl;
    cout << "==========================" << endl << endl;

    cout << "Matriks 1" << endl;
    cout << "|====================|" << endl;
    cout << "|angka1|angka2|angka3|" << endl;
    cout << "|angka4|angka5|angka6|" << endl;
    cout << "|====================|" << endl << endl;

    cout << "Matriks 2" << endl;
    cout << "|=============|" << endl;
    cout << "|angka1|angka4|" << endl;
    cout << "|angka2|angka5|" << endl;
    cout << "|angka3|angka6|" << endl;
    cout << "|=============|" << endl << endl;

    cout << "Masukkan 6 bilangan: " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin >> matriks1[i][j];
        }
    }

    cout << "Masukkan 6 bilangan: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cin >> matriks2[i][j];
        }
    }

    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        for(int k = 0; k < 3; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasilmatriks[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: " << endl;
    for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++){
        cout << "["<< i <<"]["<< j <<"]" <<"= "<< hasilmatriks[i][j] << endl;
      }
    }
    return 0;
}
