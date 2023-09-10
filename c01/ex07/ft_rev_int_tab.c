#include<stdio.h>
void ft_rev_int_tab(int *tab, int size)
    {
        int i=0;
        int swap;
        int a=size;
        while (i<(a/2))
        {
            swap=tab[i];
            tab[i]=tab[size-1];
            tab[size-1]=swap;
            i++;
            size--;
        }
        
    }
int main()
{   
    int number[]={1,9,2,8,3,8,4,8,4,5,76,45};
    ft_rev_int_tab(number,12);
    for (int i = 0; i < 12; i++ ){
        printf("%d ", number[i]);
    }
}