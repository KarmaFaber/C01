int ft_strlen(char *str)
{
    int count;
    count = 0;
    
    while (str[count] != '\0')
    {
        count ++ ;
    }
    
    return count;
}


#include <stdio.h>
int main() 
{
    
    char *var = "Hello world!";
    int length;
    
    length = ft_strlen(var);

    printf("la longitud de cadena es de: %d\n", length);

    return 0;
}
