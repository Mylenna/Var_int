#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	printf("Digite um numero.\n");
	scanf("%d", &i);
	printf("\n\nSucessor: %d,\nAntecessor: %d,\nNumero digitado: %d.\n\n", i+1, i-1, i);
	system("pause");
}
