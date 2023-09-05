// Nama: Raffael Boymian Siahaan
// NIM : 13522046

#include <stdio.h>
#include "point.h"

int main() {

    POINT P1, P2, P3;

    int x1, x2, x3, y1, y2, y3;

    BacaPOINT(&P1);
    BacaPOINT(&P2);
    BacaPOINT(&P3);

    x1 = Absis(P1); y1 = Ordinat(P1);
    x2 = Absis(P2); y2 = Ordinat(P2);
    x3 = Absis(P3); y3 = Ordinat(P3);

    // Menghitung koefisien a, b, dan c berdasarkan POINT yang terbaca
    int a, b, c;
    a = ((y2 - y1) / ((x2 - x1) * (x2 - x3))) - ((y3 - y1) / ((x3 - x1) * (x2 - x3)));
    b = ((y2 - y1) / (x2 - x1)) - a * (x1 + x2);
    c = y1 - a * x1 * x1 - b * x1;

    printf("%d\n", c);

    return 0;
}