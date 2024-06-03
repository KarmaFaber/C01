void    ft_sort_int_tab(int *tab, int size){

    int pass;
    int aux;
    int i;

    pass=1;
    
    while (pass <= size-1) 
    {
        i =0;
        while (i <= size-2){
            if (*(tab + i) > *(tab + i + 1)) /*comparar valores*/ 
                {
                /*intercambio*/
                aux = *(tab + i);
                *(tab + i) = *(tab + i + 1);
                *(tab + i + 1) = aux;
                }
            i ++;
        }
        
        pass ++;
    }

}

#include <stdio.h>
int		main(void)
{
	int tab[9] = {30,5,2,235,4,8,16,55,24};

	ft_sort_int_tab(tab, 9);

	int i = 0;
    while (i < 9) //tab[9]=&tab;
	{
		printf("%d  ", tab[i]); 
        i ++;
        
	}

    /*printf("\n%d", &tab[9]);*/
    return 0;
}
