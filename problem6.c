#include <stdio.h>
int findmax(int *ptrx,int *ptry) {
    int max;
    if(*ptrx > *ptry) {
        max = *ptrx;
    }
    else {
        max = *ptry;
    }
    return max;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;

    printf("The maximum number is %d\n", findmax(ptrx, ptry));

    return 0;
}
