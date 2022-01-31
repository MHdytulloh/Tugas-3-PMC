#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //*Kamus*//
    char FILE_NAME[25];
    char CC;
    FILE *myfile;
    int retval;

    //*Algoritma*//
    printf("Masukkan nama file yang ingin Anda buka :\n");
    gets(FILE_NAME);
    myfile = fopen(FILE_NAME, "r"); //buka file dengan modus read-only
    retval = fscanf(myfile, "%c", &CC);
    while (retval!=EOF) {
        printf("%c", CC);
        retval = fscanf(myfile, "%c", &CC);
    }
    return 0;
}
