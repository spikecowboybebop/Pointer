#include <stdio.h>

int main() {
    char str[50]; int vc = 0; int count = 0;
    int *ptr_vc = &vc;
    int *ptr_count = &count;
    printf("Enter string - ");
    gets(str);
    for(int i = 0; *(str + i) != '\0'; i++) {
        if(*(str+i) == 'A' || *(str+i) == 'E' || *(str+i) == 'I' || *(str+i) == 'O' || *(str+i) == 'U' || *(str+i) == 'a' || *(str+i) == 'e' || *(str+i) == 'i' || *(str+i) == 'o' || *(str+i) == 'u')
        {
            *ptr_vc = *ptr_vc + 1;
            *ptr_count = *ptr_count + 1;
        }
        else if (*(str+i) == ' ') {
            continue;
        }
        else {
            *ptr_count = *ptr_count + 1;
            continue;
        }
    }
    printf("There are %d vowels and %d consonants", *ptr_vc, *ptr_count - *ptr_vc);

    return 0;
}
