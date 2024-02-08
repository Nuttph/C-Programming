//vowel
#include <stdio.h>
main() {
    char v[100];

    printf("Enter a string: ");
    scanf("%s", v);
    for (int i = 0; v[i] != '\0'; i++) {
        if (!(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')) {
            printf("%c", v[i]);
        }
    }
    getch();
}