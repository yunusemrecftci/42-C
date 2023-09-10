void    ft_ultimate_div_mod(int *a, int *b)
{
    int c;
    c = *a / *b;
    *b= *a % *b;
    *a=c;

}

#include <stdio.h>

int main()
{
	int a;
	int b;
	
	a = 5;
	b = 2;

	printf("a : %d, b : %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("a : %d, b : %d\n", a, b);	
}