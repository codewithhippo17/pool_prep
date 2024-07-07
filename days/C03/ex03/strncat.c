char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i,j;
    i = 0;
    j = 0;

    while (dest[i])
    {
        i++;
    }
    while (src[j] != '\0' && j < nb) {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest; 
}



/*
#include <stdio.h>

int main() {
    // Test 1: Normal concatenation with partial src
    char dest1[100] = "Hello, ";
    char src1[] = "world!";
    printf("Before concatenation: %s\n", dest1);
    ft_strncat(dest1, src1, 3);
    printf("After concatenation with 3 characters: %s\n", dest1);

    // Test 2: Concatenation with empty dest
    char dest2[100] = "";
    char src2[] = "Just a test.";
    ft_strncat(dest2, src2, 10);
    printf("Concatenating empty dest with 10 characters: %s\n", dest2);

    // Test 3: Concatenation with empty src
    char dest3[100] = "Another test";
    char src3[] = "";
    ft_strncat(dest3, src3, 5);
    printf("Concatenating empty src: %s\n", dest3);

    // Test 4: Concatenation with nb larger than src length
    char dest4[100] = "Hello, ";
    char src4[] = "world!";
    ft_strncat(dest4, src4, 10);
    printf("Concatenating with more characters than src length: %s\n", dest4);

    // Test 5: Concatenation with exactly nb characters from src
    char dest5[100] = "Prefix";
    char src5[] = "Suffix";
    ft_strncat(dest5, src5, 6);
    printf("Concatenating with exactly 6 characters from src: %s\n", dest5);

    return 0;
}

*/