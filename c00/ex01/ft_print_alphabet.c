#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_alphabet()
{	
	char a;

	a='a';
	while(a >= 'a' && a <='z')
	{
		ft_putchar(a);
		a++;
	}
}
int main()
{
	ft_print_alphabet();
}
