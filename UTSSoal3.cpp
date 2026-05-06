//Reverse The Number
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system ("cls");  
    int angka[5];   // Array untuk menyimpan 5 angka
    int i = 0;
    
    // Input pakai WHILE
    cout << "Masukkan 5 angka: "; // user memasukkan dua angka
    while (i < 5) { // angka yg diinput tidak boleh lebih dari 5
        cin >> angka[i]; 
         i = i + 1; //supaya pindah ke index berikutnya di array
    }
    
    // Output terbalik pakai WHILE
    cout << "Output: ";
    i = 4;  // Mulai dari indeks terakhir (angka 5 ke 1)
    while (i >= 0) {
        cout << angka[i] << " ";  // menampilkan dari belakang ke depan
        i = i - 1;  // Mundur 1 langkah
    }
    
    cout << endl;
    return 0;
}