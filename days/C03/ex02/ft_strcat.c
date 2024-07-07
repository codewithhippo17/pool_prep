char *ft_strcat(char *dest, char *src)
{
    int i,j;
    i = 0;
    while (dest[i])
    {
        i++;
    }
    for (j = 0; src[j] != '\0'; j++)
    {
        dest[i + j] = src[j];
    }
    dest[i + j] = '\0';
    return dest;    
}


/*
#include <stdio.h>

int main() {
    char dest[100] = "Hello, "; // Ensure dest has enough space to hold the concatenated result
    char src[] = "world!";
    
    printf("Before concatenation: %s\n", dest);
    ft_strcat(dest, src);
    printf("After concatenation: %s\n", dest);
    
    // Additional test cases
    char dest2[100] = "";
    char src2[] = "Just a test.";
    ft_strcat(dest2, src2);
    printf("Concatenating empty dest: %s\n", dest2);

    char dest3[100] = "Another test";
    char src3[] = "";
    ft_strcat(dest3, src3);
    printf("Concatenating empty src: %s\n", dest3);

    return 0;
}*/