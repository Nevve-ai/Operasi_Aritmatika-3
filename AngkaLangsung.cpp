#include <iostream>
using namespace std;

int main(){
    int angka1 = 50, angka2 = 4; 
    int hasilpenjumlahan, hasilpengurangan, hasilperkalian, hasilsisabagi;
    float hasilpembagian;

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