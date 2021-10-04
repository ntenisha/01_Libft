void	bzero(void *s, size_t num)
{
	unsigned char *ptr;
  	
	
	ptr = (unsigned char *)s;
	  while (num > 0)
	  {
		  *ptr = '\0';
		  num--;
		  *ptr++;
	  }
}
