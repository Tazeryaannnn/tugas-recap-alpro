#include <stdio.h>

int main() {
    float s, v, t;
    int choice;

    printf("Pilih operasi:\n");
    printf("1. Hitung kecepatan\n");
    printf("2. Hitung jarak\n");
    printf("3. Hitung waktu\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Masukkan jarak (m) dan waktu (s): ");
            scanf("%f %f", &s, &t);
            v = s / t;
            printf("Kecepatan = %.2f m/s\n", v);
            break;
        case 2:
            printf("Masukkan kecepatan (m/s) dan waktu (s): ");
            scanf("%f %f", &v, &t);
            s = v * t;
            printf("Jarak = %.2f m\n", s);
            break;
        case 3:
            printf("Masukkan jarak (m) dan kecepatan (m/s): ");
            scanf("%f %f", &s, &v);
            t = s / v;
            printf("Waktu = %.2f s\n", t);
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}