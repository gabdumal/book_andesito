#include <stdio.h>

int sum(int a, int b);

int main() {
    int a = 5, b = 7;
    int result = sum(a, b);
    printf("The sum of %d and %d is %d.\n", a, b, result);
    return 0;
}