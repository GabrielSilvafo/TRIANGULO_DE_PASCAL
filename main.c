#include <stdio.h>

void printPascal(int n) {
    int arr[n][n];

    for (int linha = 0; linha < n; linha++) {
        for (int i = 0; i <= linha; i++) {
            if (linha == i || i == 0) {
                arr[linha][i] = 1;
            } else {
                arr[linha][i] = arr[linha - 1][i - 1] + arr[linha - 1][i];
            }
            printf("%d", arr[linha][i]);
            if (i < linha) {
                printf(" | ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n = 10;
    printPascal(n);
    return 0;
}
