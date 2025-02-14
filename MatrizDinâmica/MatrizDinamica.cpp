#include <stdio.h>
#include <string.h>
/*Esse arquivo é a mesma situação do MatrizEStructure.cpp que eu fiz, só que dessa vez, o usuário pode digitar a quantidade de alunos existentes na sala.*/
struct aluno {
    char nome[50];
    float n1,n2, mediaRes;
    int idade;
};

int main(void) {
	int qtd;
	float mediaCal;
	printf("Digite quantos alunos serao registrados: ");
	scanf("%d",&qtd);
    struct aluno alunos[qtd]; 

	for (int i = 0; i < qtd; i++){
		printf("\nRegistro do aluno numero %d\n",i+1);
		
		printf("Nome: ");
		scanf("%s",&alunos[i].nome);
		
		printf("Nota 1: ");
		scanf("%f",&alunos[i].n1);
		
		printf("Nota 2: ");
		scanf("%f",&alunos[i].n2);
		
		mediaCal=(alunos[i].n1+alunos[i].n2)/2;
		alunos[i].mediaRes=mediaCal;
		
		printf("Idade: ");
		scanf("%d",&alunos[i].idade);
	}
    // Exibindo os dados de todos os alunos
    printf("----Exibicao dos alunos---- \n");
    for (int i2 = 0; i2 < qtd; i2++) {
        printf("\nAluno %d:\n", i2 + 1);
        printf("Nome: %s\nNota 1: %.1f\nNota 2: %.1f\nMedia: %.1f\nIdade: %d\n\n",
               alunos[i2].nome, alunos[i2].n1, alunos[i2].n2,alunos[i2].mediaRes, alunos[i2].idade);
    }

    return 0;
}
