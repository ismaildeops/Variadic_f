#include<stdarg.h>
#include<stdio.h>


int ft_average(int count, ...)
{
    va_list ap;
    va_start(ap,count);
    int i = 0;
    int sum = 0;
    while (i < count)
    {
        int cur_num = va_arg(ap,int);
        sum = sum + cur_num;
        i++;
    }
    va_end(ap);
    return (sum / count);
}


int main()
{
    printf("%d\n",ft_average(3, 10, 20, 30));
}