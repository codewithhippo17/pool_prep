


/*unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i, lenght;
    lenght = 0;

    while (src[lenght] != '\0')
    {
        lenght++;
    }
    if (size == 0)
    {
        return lenght;
    }
    for ( i = 0; i < size -1 && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return lenght;
}*/
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int lenght;
    lenght = 0;

    if (size != 0){
        while (*(src + lenght) != '\0' && --size)
            *dest++ = *(src + lenght++);

    }
    *dest = '\0';
    while (*(src + lenght) != '\0'){
        lenght++;
    }
    return lenght;
}



#include <stdio.h>
int main() {
    char src[] = "Hello, world!";
    char dest[10]; // Destination buffer of size 10
    unsigned int size = sizeof(dest);

    unsigned int result = ft_strlcpy(dest, src, size);

    printf("Copied string: %s\n", dest);
    printf("Length of source string: %u\n", result);
    printf("size: %ld\n", sizeof(dest));


    if (result >= size) {
        printf("String was truncated.\n");
    } else {
        printf("String was not truncated.\n");
    }

    return 0;
}