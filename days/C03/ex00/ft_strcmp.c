
int ft_strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}


/*
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";

    printf("Comparison result: %d\n", ft_strcmp(str1, str2));

    return 0;
}

*/