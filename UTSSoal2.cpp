//Fibonacci Numbers
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system ("cls");
    int n;
    cout << "Masukkan suku ke : "; // User diminta untuk masukin angka 
    cin >> n;

    int fib1 = 0;  // nilai nilai ada F(0),dan F(1)
    int fib2 = 1;  
    int fib;       // Menyimpan hasil sementara
    
    if (n == 0) {
        cout << "0" << endl;  // Jika n = 0, langsung ditampilkan 0
    }
    else if (n == 1) {
        cout << "1" << endl;  // Jika n = 1, langsung ditampilkan 1
    }
    else { 
        for (int i = 2; i <= n; i++) {
            fib = fib1 + fib2;  // Jumlahkan dua nilai sebelumnya
            fib1 = fib2;        // Geser fib1 jadi fib2
            fib2 = fib;         // Geser fib2 jadi hasil baru
        }
        cout << fib2 << endl;  // Hasil akhir ada di fib2
    }
}