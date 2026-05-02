#include <stdio.h>

void tampilkanMenu() {
    printf("=== KALKULATOR KELOMPOK C ===\n");
    printf("1. Penjumlahan (+)\n");
    printf("2. Pengurangan (-)\n");
    printf("3. Perkalian (*)\n");
    printf("4. Pembagian (/)\n");
    printf("5. Keluar\n");
}
float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
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
            case 1:
                hasil = tambah(angka1, angka2);
                printf("Hasil Penjumlahan: %.2f\n", hasil);
                break;
            case 2:
                hasil = kurang(angka1, angka2);
                printf("Hasil Pengurangan: %.2f\n", hasil);
                break;
        }
        
    }while(pilihan != 5);


    return 0;
}
