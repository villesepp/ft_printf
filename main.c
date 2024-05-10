#include "printf.h"
//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main (void)
{
	// variables
	
	char 			c = 'F';
	char 			s[] = "printF";
	void*			p = &c;
	int 			d = -42;
	int				i = 86;
	unsigned int	u = 24;
	int				x = 12742; // Unsigned hexadecimal integer
	int				X = 12724; // Unsigned hexadecimal integer (uppercase)

		
	printf("\n");
	printf("id   \t c\t s\t p\t\t d\t i\t u\t x\t X\t %%\n");
	printf("val  \t %c\t %s\t %p\t %d\t %d\t %d\t %d\t %d\t %%\n", c, s, p, d, i, u, x, X);
	printf("=============================================================================\n");
	printf("pf   \t %c\t %s\t %p\t %d\t %i\t %u\t %x\t %X\t %%\n", c, s, p, d, i, u, x, X);
 ft_printf("mypf \t %c\t %s\t %p\t %d\t %i\t %u\t %x\t %X\t %%\n", c, s, p, d, i, u, x, X);

 	
	ft_printf("\n");
	ft_printf("no args: helloworld\n");
	ft_printf("char:    %c\n", c);
	ft_printf("string:  %s\n", s);
	ft_printf("hex:     %x\n", x);
	ft_printf("HEX:     %X\n", X);
	ft_printf("\n");
	return (0);
}
