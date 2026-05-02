#include <stdio.h>

void tampilkanMenu() {
    printf("=== KALKULATOR KELOMPOK C ===\n");
    printf("1. Penjumlahan (+)\n");
    printf("2. Pengurangan (-)\n");
    printf("3. Perkalian (*)\n");
    printf("4. Pembagian (/)\n");
    printf("5. Keluar\n");
}




int main() {
    int pilihan;
    float angka1, angka2, hasil;


    do{
        tampilkanMenu();
        printf("Pilih operasi (1-5): ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan angka pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan angka kedua: ");
            scanf("%f", &angka2);
        }

        switch(pilihan){
            
        }
        
    }while(pilihan != 5);


    return 0;
}
