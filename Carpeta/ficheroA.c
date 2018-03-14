#include <stdio.h>

int multiplicar(int, int);

int main(){
	int x, y, r;

	int *px;
	int *py;

	printf("Introduce el primer valor de la multiplicacion:\n");
	fflush(stdio);
	scanf("%d", &x);
	printf("Introduce el segundo valor de la multiplicacion:\n");
	fflush(stdout);
	scanf("%d", &y);

	r = multiplicacion(*px, *py);

	printf("%d * %d = %d", x, y, r);
}

int multiplicacion(int a, int b){
	
	return a * b;
}
