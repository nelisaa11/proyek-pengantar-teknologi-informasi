/*
#include <stdio.h>
int main() {
    int angka = 10;
    printf("%p", (void*) &angka);
return 0;
}

*/

/*
#include <stdio.h>
int main (){
    int angka = 10;
    int *ptr = &angka;
    printf("%d", *ptr);
return 0;
}

*/
/*
#include <stdio.h>
int main  () {
    int angka = 20;
    int *ptr = &angka;
    printf("Nilai awal: %d\n", angka);
    *ptr = 50;
    printf("Nilai setelah diubah: %d\n", angka);
return 0;
}

*/
/*
#include <stdio.h>
int main() {
    char nama[] = "Andi";
    printf("Nama: %s\n", nama);
    return 0;
}

*/
#include <stdio.h>
int main(){
    char nama[50];
    printf("Masukkan nama: ");
    scanf("%49s", nama);
    printf("Halo, %s!\n", nama);
    return 0;
}
