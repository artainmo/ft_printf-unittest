#include <stdio.h>
#include "printf.h"

int main()
{
  char c = 'a';
  char *s = "string";
  int i = -132454845;
  int amp = 12;
  int x = 1213432;
  int x2 = 0;
  unsigned int u = 2147483649;
  int n;
  double f = 4123454;

  int ret = 0;
  int ret2 = 0;

    
      ret = printf("print g 0 :%'u\n", 76);
     printf("printf ret:%i\n", ret);
     //write(1, "ft_", 3);
     //ret2 = ft_printf("print g 0 :%g\n", 0.0);
     //ft_printf("ft_printf ret:%i\n", ret2);

     /*ret = printf("modulo 4 point 8 g:%4.8g\n", 424242424.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 4 point 8 g:%4.8g\n", 424242424.0);
     ft_printf("ft_printf ret:%i\n", ret2);*///real function ERROR

     /*ret = printf("printf: p30 %.0g\n", 100.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf: p30 %.0g\n", 100.0);
     ft_printf("ft_printf ret:%i\n", ret2);*///real function ERROR

  return (0);
}
