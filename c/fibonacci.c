#include <stdio.h>

int fibo(int n) {
    if (n <= 2) {
        return 1;
    }

    return fibo(n-1) + fibo(n-2);
}

int main(void) {
    int n;
    printf("choose any number ");
    scanf("%d", &n);
    printf("%d\n", fibo(n));

    return 0;
}
