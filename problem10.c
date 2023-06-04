#include <stdio.h>

int main() {
    char str[50];
    printf("Enter string - ");
    gets(str);
    int count = 0;
    for(int i = 0; *(str+i) != '\0'; i++) {
        count++;
    }
    printf("The length of the string is %d", count);


    return 0;
}
