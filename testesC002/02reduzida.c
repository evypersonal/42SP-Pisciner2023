#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    while(*str != '\0')
        {
        if((*str >= 'a' && *str <= 'z') || (*str  >= 'A' && *str <= 'Z'))
        {
            if(*str == ' ')
            {
                str++;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int resul[1];
    resul[0] = ft_str_is_alpha ("");
    printf("%d", resul[0]);
    return 0;
}