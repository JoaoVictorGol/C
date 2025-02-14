#include <stdio.h>

int main(void){
	int n1;
	
	/*O %f serve pra registrar uma variável float, já o %.2f, arredonda as casas e formata o resultado.*/
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);

	int suc=n1+1, ante=n1-1;
	
	printf("O sucessor de %d e %d e o antecessor e %d",n1,suc,ante);
	
	return 0;
}
