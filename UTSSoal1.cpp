//FPB (Faktor Persekutuan Terbesar)
#include <iostream>     // Library input/output untuk cpp
#include <stdlib.h>     //library untuk membersihkan layar
using namespace std;

int main() {
    system("cls");      // Bersihkan layar output
    
    int a, b;           // Variable untuk 2 angka
    
    cout << "Masukkan dua angka: ";
    cin >> a >> b;      // Input 2 angka dari user

    // Algoritma Euclidean untuk mencari FPB
    while (b != 0) {    // Loop sampai pembagi=0
        int sisa = a % b;   // Hitung sisa pembagian
        a = b;              // Geser: a = pembagi sebelumnya
        b = sisa;           // Geser: b = sisa baru
    }

    cout << "FPB = " << a << endl;  // a adalah FPB

    return 0;
}