#include <stdio.h>
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i; space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            int coefficient = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ", coefficient);
        }
        printf("\n");
    }
    return 0;
}

