#include <stdio.h>

/*Esse � um exerc�cio sobre rela��es, ao retornar 0, significa que a compara��o � falsa, ao retornar 1, significa que a compara��o � verdadeira.*/
int main(void){
	float n1, n2;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%f",&n1);
	printf("\nDigite o segundo numero: ");
	scanf("%f",&n2);
	
	int resultado = (n1==n2);
	
	printf("%.2f == %.2f e %d\n",n1,n2,resultado);
	
	resultado = (n1!=n2);
	
	printf("%.2f != %.2f e %d\n",n1,n2,resultado);
	
	resultado = (n1>n2);
	
	printf("%.2f > %.2f e %d\n",n1,n2,resultado);
	
	resultado = (n1<n2);
	
	printf("%.2f < %.2f e %d\n",n1,n2,resultado);
	
	resultado = (n1>=n2);
	
	printf("%.2f >= %.2f e %d\n",n1,n2,resultado);
	
	resultado = (n1<=n2);
	
	printf("%.2f <= %.2f e %d\n",n1,n2,resultado);
}
