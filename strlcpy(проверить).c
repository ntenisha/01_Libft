#include "libft.h"

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
    size_t  i;
    
    i = 0;
    if (!src)
        return (0);
    if (size > 0)
    {
        while (src[i] && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i])
        i++;
    return (i);
}

size_t	ft_strlcpy3(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	if (0 < dstsize)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}


#include <string.h>
#include <stdio.h>                       /* для printf() */

char  buf[10];                      // буфер размером меньше строки

int main()
{  char   *str = "образец строки";
   size_t  sz;

   buf[0] = '\0';                   // избыточная инициализация для отладочной печати

//   printf("строка: \"%s\"\n\n", str);
//   printf("буфер перед копированием: \"%s\"\n", buf);

   sz = strlcpy(buf, str, sizeof(buf));    
//   if (sz >= sizeof(buf))           // пример определения усечения строки      
//      printf("обнаружено усечение строки с %d до %d символов !\n", sz, sizeof(buf)-1);

//   printf("буфер после копирования:  \"%s\"\n", buf);
    printf("буфер после копирования:  %ld \n", sz);

   return 0;
}
