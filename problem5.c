#include <stdio.h>
int add(int *ptrx,int *ptry) {
    int sum = *ptrx + *ptry;
    return sum;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;

    printf("The sum is %d\n", add(ptrx, ptry));

    return 0;
}
