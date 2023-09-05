// Nama: Raffael Boymian Siahaan
// NIM: 13522046

#include <stdio.h>
#include "point.h"
#include "garis.h"

int main() {

    // Inisialisasi Variabel
    int b, n;
    int count = 0;

    // Inisialisasi Garis dan Titik
    GARIS Ps;
    POINT Pb;

    // Meminta input b (jarak maksimum antara biri-biri dan jalur serigala)
    scanf("%d", &b);

    // Meminta input dan membentuk bentukan garis (jalur serigala)
    BacaGARIS(&Ps);

    // Meminta input n (jumlah biri-biri)
    scanf("%d", &n);

    // Perulangan untuk menginput posisi biri-biri
    for (int i = 0; i < n; i++) {
        
        // Meminta input serta membentuk bentukan titik (point) untuk posisi biri-biri
        BacaPOINT(&Pb);

        // Pengkondisian count bertambah 1 jika jarak garis dan titik posisi biri biri <= b
        if (JarakGARIS(Ps, Pb) <= b) {
            count++;
        }
    }

    // Menampilkan jumlah biri-biri yang dapat diselamatkan
    printf("%d\n", count);

    return 0;
}
