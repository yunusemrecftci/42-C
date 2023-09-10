#include<stdio.h>
void ft_swap(int *a, int *b)
    {
        int c;
        c=*a;
        *a=*b;
        *b=c;
    }
int main()
    {
        int *a;
        int *b;
        int c;
        int d;
        
        c=1;
        d=20;
        a=&c;
        b=&d;
        ft_swap(b,a);
        printf("%d ve %d ",d,c);
    }