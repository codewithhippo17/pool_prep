
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;
    len = 0;
    while (*str)
    {
        str++;
        len++;
    }
    return (len);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    int lenght;
    lenght = ft_strlen(src);
    dest = (char *) malloc ((lenght + 1) * sizeof  (char));

    if (dest == NULL)
    {
        return NULL;
    }
    
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}


/*int main()
{
    char *src = "Hello, world!";
    char *dest = ft_strcpy(dest, src);

    if (dest != NULL)
    {
        printf("Source: %s\n", src);
        printf("Destination: %s\n", dest);
        free(dest); // Free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/