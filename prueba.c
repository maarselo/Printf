#include <stdio.h>
	
int	main(void)
{
	char	c = 'a';
	char	*ptr = "Hola";
	int	num1 = 69;
	int	num3 = 545;
	//int	num4 = -45;

//Casos para char:
	printf("%c\n", c); //Imprime un char(N)
	printf("%c\n", num1);//Imprime un int(D)

//Casos de string
	printf("%s\n", ptr);//Imprimir un puntero(N)

//Casos para para pointer
	printf("%p\n\n", ptr); //Siempre debe recibir un puntero para imprimir su direccicon de memoira de lo que apunta

//Para i y d, son lo mismo
	printf("%d\n", num1);//Imprime char(D)
	printf("%i\n", num1); //Imrpime int(N)
	
	printf("%u\n\n", num1);//Imrime unsigned ints solo con int pasan cosas raras

//Imprime el numero hexadecimal x en minuscula y X en mayuscukla
	printf("%x\n", 4754736);
	printf("%X\n", 4754736);

//Tambien puede imrpimri una strig al completo
	printf("Hola me llamo Marceelo \n");
//Y dos porcentjes quiere decir impimrir el porcentaje el simbolo
	printf("%%\n"); 
}
