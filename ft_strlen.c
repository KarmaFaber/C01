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
    
    
  

    printf("%d\n", ft_strlen(var));

    return 0;
}
