// Armstrong Number
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system ("cls");
    int angka, original, digit, jumlah = 0, pangkat;
    // angka     -> menyimpan input dari user
    // original  -> menyimpan nilai awal (biar tidak hilang saat diproses)
    // digit     -> untuk menghitung jumlah digit dalam angka
    // jumlah    -> hasil penjumlahan akhir dari digit^digit
    // pangkat   -> untuk menyimpan hasil sementara saat menghitung pangkat

    // Penginputan
    cout << "Input Angka : ";
    cin >> angka;
    
    original = angka;   // Simpan angka asli karena variabel 'angka' akan diubah saat proses
    digit = 0;          // Inisialisasi jumlah digit = 0
    
    // Hitung jumlah digit
    while (angka > 0) {
        angka = angka / 10; // Membagi angka dengan 10 untuk menghilangkan 1 digit terakhir
        digit = digit + 1; // Setiap kali angka dipotong, berarti ada 1 digit
    }
    
    // Reset untuk perhitungan
    angka = original; // Kembalikan angka ke nilai awal untuk diproses ulang
    jumlah = 0; // Reset hasil penjumlahan
    
    // Hitung jumlah pangkat digit
    while (angka > 0) {
        int sisa = angka % 10;   // Ambil digit terakhir
        pangkat = 1; 
        // Set nilai awal pangkat
        // Contoh: 153 -> 3
        
        // Hitung sisa^pangkat
        for (int i = 0; i < digit; i++) {
            pangkat = pangkat * sisa;
        }
        
        jumlah = jumlah + pangkat;  // Tambahkan hasil pangkat ke total
        angka = angka / 10;         // Buang digit terakhir
    }
    // Setelah loop, jumlah -> hasil total semua digit yang dipangkatkan


    // Cek hasil jumlah Output
    if (jumlah == original) {
        cout << "Ya, " << original;  // Jika hasil sama dengan angka awal
        cout << " ini adalah Armstrong Number";
    } else {
        cout << "Tidak, " << original;  // Jika hasil tidak sama dengan angka awal
        cout << " ini bukan Armstrong Number";
    }
    
    cout << " ";
    
    // Tampilkan perhitungan
    angka = original;  

    while (angka > 0) {  
        int sisa = angka % 10;  // mengambil digitnya
        cout << sisa;  // menampilkan digitnyz

        for (int i = 0; i < digit; i++) {  
            cout << "*";
            // menampilkan simbol bintang "*" sebanyak jumlah digit 
        }
        // Jika masih ada digit berikutnya, maka akan ditampilkan "+"
        if (angka / 10 > 0) cout << " + ";
        angka = angka / 10;  // Buang digit
    }
    // hasil akhir
    cout << " = " << jumlah << endl;
    
    return 0;
}