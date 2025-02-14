#include <stdio.h>

/*Na declaração int main(void), o código dentro não recebe argumentos, no caso de ter algum argumento, ele gera um erro*/
int main(void){
	int idade;
	/*Nessa etapa, o programa requisita a declaração de uma variável para o próprio usuário, a função scanf lê o texto digitado
	e armazena selecionando a posição pelo %d na variável idade indicada com &*/
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	printf("Voce tem %d anos",idade);
	
	return 0;
}
