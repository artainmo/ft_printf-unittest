#include "printf.h"
int main()
{
	char *str;

	str  = "Hellol;ow;wgrg;";
	ft_printf("Hello World %s", str);
	system("leaks a.out");
	return (0);
}
