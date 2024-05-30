void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b; 
    *mod = a%b;
}

/*#include <stdio.h>
int     main() 
{
    int a = 11;
    int b = 2;
    
    int div_var;
    int mod_var;
    
    int *div_pointer;
    int *mod_pointer;
    
    ft_div_mod(a, b, &div_var, &mod_var); 
    
    //tambien podemos usar formato: 
    //div_pointer = &div_var;
    //mod_pointer = &mod_var;
    //ft_div_mod(a, b, div_pointer, mod_pointer);
    
    printf("*div = %d\n*mod = %d\n", div_var, mod_var); 
    
    return 0;
}*/
