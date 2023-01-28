#include <stdio.h>
#include <stdlib.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){

    int n;
    char ulang;

    top:
    clear();
    printf("\n--------------------------------\n");
    printf("Konversi Desimal ke Heksadesimal\n");
    printf("By : AFFALXIMAM\n");
    printf("--------------------------------\n\n");

    printf("Masukan bilangan Desimal : ");
    scanf("%d", &n);
    printf("Bilangan Heksadesimal Adalah : %X \n\n", n);

        cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
        if(ulang == 'y'){
            goto top;
        }
        if(ulang == 't'){
            printf("\nProgram Selesai");
        }
        else{
            goto cek;
        }
    return 0;
}