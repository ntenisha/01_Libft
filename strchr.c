#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *ft_strchr(const char *str, int ch)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] == ch)
            return ((char *)(str + i));
        i++;
    }
    if (str[i] == ch)
        return ((char *)(str + i));
    return ((void *)0);
}


int main()
{  
    char *str = "22321231fdsdf9s";
    char ch;
    
    ch = '9';
    
    printf("my  %s  i   \n", ft_strchr(str , ch));
    printf("or  %s  i   \n", strchr(str , ch));
    
    return 0;
}
