#include <stdio.h>
#define SIZE 10
int main ()
{
    
    int my_array[SIZE]={9, 22, 0, 122, 77, 1, 13, 7, 19, -10};
    int pass, aux, i;
    

    //imprimir array original: /*-----------------------------------------------------------*/
    printf("\n\n->datos en forma inicial: \n");
    i=0;
    while (i <= SIZE-1) // size -1= ultima posició de la array-> SIZE 10 nos da &my_array. ojo con esto!
    {
        printf("%d  ", my_array[i]);
        i++;
    }

    
    printf("\n\n->datos en orden ascendente: \n");/*-----------------------------------------------------------*/
    //cambios y comprobaciones
    pass=1;
    while (pass <= SIZE-1) // SIZE 10 nos da &my_array. ojo con esto!
    {
        i =0;
        while (i<=SIZE-2){
            if (my_array[i]>my_array[i+1]) // comparacion de valores en la casilla y la sguiente casilla 
                {
                //intercambio
                aux=my_array[i];
                my_array[i]=my_array[i+1];
                my_array[i+1]=aux;
                }
            i ++;
        }
        
        pass ++;
    }
    
    //imprimir la array cambiada
    i =0;
    while (i<= SIZE-1)
    {
        printf("%d  ", my_array[i]);
        i ++;
    }


    //imprimir en orden descenddente /*-----------------------------------------------------------*/
    printf("\n\n->imprimir en orden descendiente:  \n");
    //cambios y comprobaciones
    pass=1;
    while (pass <= SIZE-1) // SIZE 10 nos da &my_array. ojo con esto!
    {
        i =0;
        while (i<=SIZE-2){
            if (my_array[i]<my_array[i+1]) // comparacion 
                {
                //intercambio
                aux=my_array[i];
                my_array[i]=my_array[i+1];
                my_array[i+1]=aux;
                }
            i ++;
        }
        
        pass ++;
    }

    //imprimir la array cambiada 
    i =0;
    while (i<= SIZE-1)
    {
        printf("%d  ", my_array[i]);
        i ++;
    }


    printf("\n\n\nimprimir &my_array:\n%d", my_array[10]); /*-> imprimir &my_array-----------------------------------------------------------*/
    

    //invertir la array e imprimir /*-----------------------------------------------------------*/
    printf("\n\n->invertir array\n\n");
    i=SIZE-1; // empezamos en 10(SIZE)
    while(i>=0) // hacemos el reccorido hasta array[0]
    {
        printf("%d  ", my_array[i]);
        i--;
    }

    return 0;
}
