void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap (&tab[i], &tab[size - 1 - i]);
		i ++ ;
	}
}
/*#include <stdio.h>
int main()
{
    int tab[9] = {2, 5, 7, 9, 10, 12, 16, 24, 777};
    printf("\nla array original es:\n");
    int i=0;
    while (i<9){

        printf("%d ", tab[i]);
        i ++ ; 
    }
    ft_rev_int_tab(tab, 9);
    printf("\nla array invertida es:\n");
    i=0;
    while (i<9){

        printf("%d ", tab[i]);
        i ++ ; 
    }
    return 0;
}*/
