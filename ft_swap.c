void    ft_swap(int *a, int *b) 
{
    int aux;
   
    aux = *b; // metemos en la varieble aux el valor de 'b'
    *b = *a; // metemos en la varieble 'b' el valor de 'a'
    *a = aux; // sacamos del la varieble aux el valor de 'a'
}

/*#include <stdio.h>
int     main() 
{
    int var_a; //declaramosvarible a
    int var_b; //declaramosvarible b
    
    int *a_pointer; // declaramos puntero de v_a -> a
    int *b_pointer; // declaramos puntero de v_b -> b
   
    var_a=10; //damos valor de prueba a 'a'
    var_b=777; //damos valor de prueba a 'b'
    printf("los valores originales de a= %d y b=%d \n", var_a, var_b); // impresión de seguimiento para comprobar si se produjo el cambio
   
    a_pointer=&var_a; //metemos en el puntero a la direccion de memoria de v_a
    b_pointer=&var_b; // metemos en el puntero b la direccion de memoria de v_b
    
    estos pasos los metemos en la funcion ft_swap-----------------
    aux_pointer=&v_aux; // metemos en el puntero aux la direccion de memoria de la varieble v_aux
    *a_pointer=var_a;
    *b_pointer=var_b;
    *aux_pointer=var_b;
    *b_pointer=var_a;
    *a_pointer=var_aux;  
    ---------------------------------------------------
    
    ft_swap(a_pointer, b_pointer);
    printf("valores cambiados de a=%d y b= %d \n\n", var_a, var_b);
    
    return 0;
}*/
