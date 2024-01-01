#include <stdio.h>
#include <string.h>

int main() {

    char T1[10][20];
    char T2[15][20];

    printf("Enter words for T1 (up to 10 words):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%s", T1[i]);
    }

    printf("Enter words for T2 (up to 15 words):\n");
    for (int i = 0; i < 15; i++) {
        scanf("%s", T2[i]);
    }

    printf("Words in T1 that do not exist in T2:\n");
    int firstWordPrinted = 0;
    for (int i = 0; i < 10; i++) {
        int found = 0;

        for (int j = 0; j < 15; j++) {
            if (strcmp(T1[i], T2[j]) == 0) {
                found = 1;
                break;
            }
        }

        if (!found) {

            if (firstWordPrinted) {
                printf("-");
            } else {
                firstWordPrinted = 1;
            }

            printf("%s", T1[i]);
        }
    }

    return 0;
}
