void    ft_ultimate_div_mod( int *a, int *b )
{
        int     div;
        int     mod;

        div = *a / *b;
        mod = *a % *b;
        
        *a = div;
        *b = mod;
}

#include <stdio.h>
int     main() 
{    
    
    int a, b;

    int *a_pointer;
    int *b_pointer;

    a_pointer = &a;
    b_pointer = &b;

    *a_pointer = 11;
    *b_pointer = 2;
    

    ft_ultimate_div_mod(a_pointer, b_pointer);
    
    printf("*a = %d\n*b = %d\n",*a_pointer, *b_pointer);
    
    return 0;
}
