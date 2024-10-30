
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char   *ptr1;
    unsigned char   *ptr2;

    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;
    i = 0;
    while(n > 0)
    {
        if (ptr1[i] > ptr2[i] || ptr1[i] < ptr2[i])
            return (ptr1[i] - ptr2[i]);
        n--;
        i++;
    }
    return (0);
}
