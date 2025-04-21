#include "libftprintf.h"
#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648


int	main(void)
{
	int x = 42;
	int p1;
	int p2;
	p1 = ft_printf("HOla que tal1 %% %s %i %x %p %u\n%", "Yo fran", 345, 10, (void*)&x, -3, 7);
	write(1, "\n", 1);
	p2 = printf("HOla que tal2 %% %s %i %x %p %u\n%", "Yo fran", 345, 10, (void*)&x, -3, 7);
	write(1, "\n", 1);
	printf("Printf mio: %d \nPrintf no mio: %d \n", p1, p2);

	write(1, "\n", 1);
	p1 = ft_printf("HOla que tal1 %% %c %s %i %i %i %u %X %X %d %d %x %X %p %p %u %j \n", 'c', "Yo fran", 345, 0, INT_MIN, 0, INT_MIN - 1009008907, INT_MAX + 34904309, -32, INT_MAX, 10, 10, (void*)&x, NULL, 5);
	write(1, "\n", 1);
	p2 = printf("HOla que tal2 %% %c %s %i %i %i %u %X %X %d %d %x %X %p %p %u %j \n", 'c', "Yo fran", 345, 0, INT_MIN, 0, INT_MIN - 1009008907, INT_MAX + 34904309, -32, INT_MAX, 10, 10, (void*)&x, NULL, 5);
	write(1, "\n", 1);
	printf("Printf mio: %d \nPrintf no mio: %d \n", p1, p2);

	write(1, "\n", 1);
	p1 = ft_printf("Mio1 %%%", 89);
	write(1, "\n", 1);
	p2 = printf("Mio2 %%%", 89);
	printf("\n");
	printf("Printf mio: %d \nPrintf no mio: %d \n", p1, p2);

	p1 = ft_printf("%s\n", NULL);
	write(1, "\n", 1);
	p2 = printf("%s\n", NULL);
	printf("\n");
	printf("Printf mio: %d \nPrintf no mio: %d \n", p1, p2);


	return (0);
}
