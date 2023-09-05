// Nama: Raffael Boymian Siahaan
// NIM: 13522046

#include <stdio.h>
#include "time.h"

int main() {

	// Inisialisasi Variabel
	int N;

	// Inisialisasi Time
	TIME T1, T2, Tawal, Takhir, temp;

	// Meminta input data yang akan dibaca
	scanf("%d", &N);

	// Perulangan sejumlah input N
	for (int i = 0; i < N; i++) {

		printf("[%d]\n", i+1);

		// Meminta input jam yang ingin diperiksa
		BacaTIME(&T1);
		BacaTIME(&T2);

		if (TGT(T1, T2)) {
			temp = T1;
			T1 = T2;
			T2 = temp;
		}

		// Mengeluarkan output berupa selisih detik
		printf("%d\n", Durasi(T1, T2));

		if (i == 0) {
			Tawal = T1;
			Takhir = T2;
		} else {
			if (TLT(T1, Tawal)) {
				Tawal = T1;
			}
			if (TGT(T2, Takhir)) {
				Takhir = T2;
			}
		}
	}

	// Mengeluarkan output berupa waktu awal (Tawal) dan akhir (Takhir)
	TulisTIME(Tawal);
	printf("\n");
	TulisTIME(Takhir);
	printf("\n");

	return 0;
}