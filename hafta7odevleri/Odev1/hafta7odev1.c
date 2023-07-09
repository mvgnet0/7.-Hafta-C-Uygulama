#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100]; // Kelimenin veya cümlenin maksimum uzunluğunu belirleyin

    printf("Bir kelime veya cumle girin: ");
    fgets(kelime, sizeof(kelime), stdin);

    // fgets fonksiyonu ile kullanıcının girdiği kelimeyi alıyoruz
    // sizeof(kelime) ile kelime dizisinin maksimum uzunluğunu belirtiyoruz

    kelime[strcspn(kelime, "\n")] = '\0'; // Son karakteri yeni satır karakteri (\n) ile değiştiriyoruz

    int uzunluk = strlen(kelime); // Kelimenin veya cümlenin uzunluğunu hesaplıyoruz

    printf("Girdiginiz kelimenin veya cumlenin uzunlugu: %d\n", uzunluk);

    return 0;
}
