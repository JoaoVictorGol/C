#include <stdio.h>

/*Na declara��o int main(void), o c�digo dentro n�o recebe argumentos, no caso de ter algum argumento, ele gera um erro*/
int main(void){
	int idade;
	/*Nessa etapa, o programa requisita a declara��o de uma vari�vel para o pr�prio usu�rio, a fun��o scanf l� o texto digitado
	e armazena selecionando a posi��o pelo %d na vari�vel idade indicada com &*/
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	printf("Voce tem %d anos",idade);
	
	return 0;
}
