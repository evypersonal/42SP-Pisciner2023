#include <unistd.h>

void	ft_putstr(char *str)
{
	char learn;

	while(*str != '\0')
	{
		learn = *str; 
		write(1, &learn, 1);
		str++;
	}
}

int main()
{
	ft_putstr("Hello");
}