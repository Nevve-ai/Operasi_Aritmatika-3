#include <iostream>
using namespace std;

int main(){
    int angka1, angka2, hasilpenjumlahan, hasilpengurangan, hasilperkalian, hasilsisabagi;
    float hasilpembagian;

    cout << "Masukkan angka pertama :";
    cin >> angka1;
    cout << "Masukkan angka kedua :";
    cin >> angka2;

    hasilpenjumlahan = angka1 + angka2;
    hasilpengurangan = angka1 - angka2;
    hasilperkalian = angka1 * angka2;
    hasilpembagian = (float)angka1 / angka2;
    hasilsisabagi = angka1 % angka2;

    cout << "Hasil Penjumlahan: " << hasilpenjumlahan << endl;
    cout << "Hasil Pengurangan: " << hasilpengurangan << endl;
    cout << "Hasil Perkalian: " << hasilperkalian << endl;
    cout << "Hasil Pembagian: " << hasilpembagian << endl;
    cout << "Hasil Sisa Bagi: " << hasilsisabagi << endl;
    return 0;
}