
#include <stdlib.h>



char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    dest = (char *) malloc ((n +1) * sizeof(char));
    if (dest == NULL)
    {
        return NULL;
    }
    int unsigned i;
    i = 0;

    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    dest[n] = '\0';
    return dest;
}

/*#include <stdio.h>

int main() {
    char src[] = "Hello, world!";
    unsigned int n = 5; // Number of characters to copy

    // Call ft_strncpy and store the result in dest
    char *dest = ft_strncpy(dest, src, n);

    if (dest != NULL) {
        printf("Source: %s\n", src);
        printf("Destination: %s\n", dest);
        free(dest); // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/