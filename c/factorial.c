#include <stdio.h>

int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n-1);
}

int main(void) {
    int num;
    printf("choose any number ");
    scanf("%d", &num);
    printf("%d \n", fact(num));

    return 0;
}
