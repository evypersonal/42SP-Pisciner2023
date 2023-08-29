#include <stdio.h>
void    ft_swap(int *a,int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main (void)
{
    int x;
    int y;

    x = 5;
    y = 8;

    ft_swap (&x , &y);
    printf ("x=%d, y=%d\n", x , y);
}