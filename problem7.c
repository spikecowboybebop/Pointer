#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter for element [%d] - ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        printf("element [%d] - %d\n", i+1, *(arr + i));

    }

    return 0;
}
