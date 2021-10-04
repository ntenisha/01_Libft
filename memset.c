void *ft_memset(void *memptr, int val, size_t num)
{
  unsigned char *ptr;
  unsigned char simbol;
  
  ptr = (unsigned char *)memptr;
  simbol = (unsigned char)val;
  
  while (num > 0)
  {
	  *ptr = simbol;
	  num--;
	  *ptr++;
  }
	return (memptr);
}
