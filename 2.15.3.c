#include <stdio.h>
#include <stdlib.h>
//comentarios
//e máis comentarios
int main()
	{
	int x,i;
	printf("Teclea un número que sea mayor que cero\n");
	scanf("%d",&x);
	for(i=x;i<=1;i+=(-1))
		{
		printf("%d \n", i);
		}
	return 0;
	}
	
