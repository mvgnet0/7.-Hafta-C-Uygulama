#include <stdio.h>

int faktoriyel(int sayi);

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    int sonuc = faktoriyel(sayi);

    printf("%d sayisinin faktoriyeli: %d\n", sayi, sonuc);

    return 0;
}

int faktoriyel(int sayi) {
    if (sayi == 0)
        return 1;
    else
        return sayi * faktoriyel(sayi - 1);
}
