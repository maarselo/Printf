#include <stdio.h>

int	main(void)
{
	int num = printf("%%\n");
	printf("%d\n", num);

	char *str = "hola";
	int num1 = printf("%s", str);
	printf("%d", num1);
}
