#include <stdio.h>

int main() {
    int n, prod;
    printf("Enter Number - ");
    scanf("%d", &n);

    int *ptr_n = &n;
    int *ptr_prod = &prod;
    *ptr_prod = 1;

    for(int i = *ptr_n; i >= 1; i--) {
        *ptr_prod = *ptr_prod * i;
    }
    printf("The factorial of %d is %d", *ptr_n, *ptr_prod);

    return 0;
}
