unsigned int ft_strlcat(char *dest, const char *src, unsigned int size) {
    unsigned int i, j, dest_len, src_len;
    i = 0;
    j = 0;
    dest_len = 0;
    src_len = 0;

    while (dest[dest_len])
        dest_len++;
    while (src[src_len])
        src_len++;
    if (size <= dest_len)
        return (size + src_len);
    i = dest_len;
    while (src[j] != '\0' && i < size - 1) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}




/*   main function 

#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dlen = strnlen(dst, dstsize);
    size_t slen = strlen(src);

    if (dlen == dstsize) return dstsize + slen;
    if (slen < dstsize - dlen) {
        memcpy(dst + dlen, src, slen + 1);
    } else {
        memcpy(dst + dlen, src, dstsize - dlen - 1);
        dst[dstsize - 1] = '\0';
    }
    return dlen + slen;
}


int main() {
    char dest1[20] = "Hello";
    char dest2[20] = "Hello";
    const char *src = " World";
    unsigned int size = sizeof(dest1);
    
    // Using ft_strlcat
    unsigned int result_ft = ft_strlcat(dest1, src, size);
    
    // Using strlcat
    unsigned int result_std = strlcat(dest2, src, size);

    // Print results
    printf("ft_strlcat result: %s, Length: %u\n", dest1, result_ft);
    printf("strlcat result: %s, Length: %u\n", dest2, result_std);

    // Check if both functions produce the same result
    if (strcmp(dest1, dest2) == 0 && result_ft == result_std) {
        printf("ft_strlcat works correctly!\n");
    } else {
        printf("ft_strlcat does not match strlcat.\n");
    }

    return 0;
}
*/


