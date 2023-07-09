#include <stdio.h>

int main() {
    FILE* dosya;
    char metin[100];

    // Dosyayı yazmak için açma
    dosya = fopen("metin.txt", "w");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    printf("Metni girin: ");
    fgets(metin, sizeof(metin), stdin);

    // Metni dosyaya yazma
    fprintf(dosya, "%s", metin);

    // Dosyayı kapatma
    fclose(dosya);

    // Dosyayı okumak için açma
    dosya = fopen("metin.txt", "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    printf("Dosyadan okunan metin:\n");

    // Dosyadan metni okuma ve ekrana yazdırma
    while (fgets(metin, sizeof(metin), dosya) != NULL) {
        printf("%s", metin);
    }

    // Dosyayı kapatma
    fclose(dosya);

    return 0;
}
