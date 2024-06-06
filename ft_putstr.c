#include <unistd.h>

void  ft_putstr(char *str)
{
    int count;
    count = 0;
    
    while (str[count] != '\0')
    {
        write(1, &str[count], 1);
        count++;
    }
}


/*#include <stdio.h>
int main() 
{
    
    char *mystr = "Hello world!";

    ft_putstr(mystr);

    return 0;
}*/
