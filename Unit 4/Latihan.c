#include <stdio.h>

int main() {
    int sisi;
    printf("Masukkan panjang sisi: ");
    scanf("%d", &sisi);
    
    int keliling = 4 * sisi;
    int luas = sisi * sisi;
    int volume = sisi * sisi * sisi;
    
    printf("Keliling persegi: %d\n", keliling);
    printf("Luas persegi: %d\n", luas);
    printf("Volume kubus: %d\n", volume);
    
    return 0;
}