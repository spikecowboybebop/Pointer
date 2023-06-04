#include <stdio.h>
#include <stdlib.h>
int main() {
    int n; printf("Enter the size of the array: ");scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        printf("Enter element [%d] - ", i+1);
        scanf("%d", ptr+i);
    }
    int max = *(ptr+0);
    for(int i = 1; i < n; i++) {
        if(max > *(ptr+i)) {
            continue;
        }
        else {
            max = *(ptr+i);
        }
    }
    printf("The Largest element is %d", max);

    return 0;
}
