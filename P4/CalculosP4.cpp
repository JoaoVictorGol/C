#include <stdio.h>

int main(void){
	float n1,n2;
	
	/*O %f serve pra registrar uma variável float, já o %.2f, arredonda as casas e formata o resultado.*/
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	
	float soma=n1+n2, sub=n1-n2, div=n1/n2, mult=n1*n2;
	
	printf("Soma: %.2f\n\n",soma);
	printf("Subtracao: %.2f\n\n",sub);
	printf("Divisao: %.2f\n\n",div);
	printf("Multiplicacao: %.2f\n\n",mult);
	
	return 0;
}
