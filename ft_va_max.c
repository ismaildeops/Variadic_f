#include <stdarg.h>
#include <stdio.h>

int ft_max(int count, ...)
{
    int max = 1;
    va_list ap;
    va_start(ap, count);
    int i = 0;
    max = va_arg(ap,int);
    // 2,3,1,4
    i++;
    while (i < count)
    {
        int current_num = va_arg(ap,int);
        if (max < current_num)
            max = current_num;
        i++;
    }
    va_end(ap);
    return max;
}

int main(void)
{
    printf("%d\n", ft_max(4, -4,-10,-2,-20)); // -2

    return (0);
}