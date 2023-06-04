#include <stdio.h>

int main() {
    int size; int j = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *ptr = (int *)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) {
        printf("Enter element [%d] - ", i+1);
        scanf("%d", (ptr+i));
    }
    for(int i = (size-1); i > 0; i--) {
        j = j + i;
    }
    for(int i = 1; i <= j; i++) {
        for(int k = 0; k < (size-1); k++) {
            if(*(ptr+k) > *(ptr+(k+1))) {
                int temp = *(ptr+(k+1));
                *(ptr+(k+1)) = *(ptr+k);
                *(ptr+k) = temp;
            }
            else {
                continue;
            }
        }
    }

    for(int i = 0; i < size; i++) {
        printf("element [%d] - %d\n", i+1, *(ptr+i));
    }

    return 0;
}
