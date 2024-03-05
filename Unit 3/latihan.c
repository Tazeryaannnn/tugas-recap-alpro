#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Masukkan elemen array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Hasil penjumlahan seluruh elemen pada array: %d\n", sum);
    return 0;
}