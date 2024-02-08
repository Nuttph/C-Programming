#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    char ch;
    for (i = 1; i < 10000; i++) {
        if (!(i % 6)) {
            printf("%d more? (Y/N)", i);
            ch = getch(); 
            if (ch == 'n' || ch == 'N') {
                break;
            }
            printf("\n");
        }
        getch();  
    }
    return 0;
}
