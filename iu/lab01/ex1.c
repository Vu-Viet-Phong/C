#include <stdio.h>

int main() {
    int n;

    printf("input: ");
    scanf("%d", &n);

    while (n) {
        printf("%d ", n % 10);
        n /= 10;
    }

	return 0;
}
