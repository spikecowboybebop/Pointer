#include <stdio.h>
void swap(int *ptrx, int *ptry) {
    int temp = *ptrx;
    *ptrx = *ptry;

    *ptry = temp;

}
int main() {
    int x,y;
    printf("Enter values for x and y - ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);
    printf("Values of x and y are - %d %d", x, y);

    return 0;
}
