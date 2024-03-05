#include <stdio.h>

int main() {
    int jumlahTransaksi;
    int totalPengeluaran = 0;

    printf("Masukkan jumlah transaksi hari ini: ");
    scanf("%d", &jumlahTransaksi);

    if (jumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
    } else {
        int nominalTransaksi;
        for (int i = 1; i <= jumlahTransaksi; i++) {
            printf("Transaksi %d: ", i);
            scanf("%d", &nominalTransaksi);
            totalPengeluaran += nominalTransaksi;
        }

        printf("Total pengeluaran hari ini: %d\n", totalPengeluaran);
    }

    return 0;
}