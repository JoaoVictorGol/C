#include <stdio.h>
#include <string.h>
/*Esse é um exercício pra fazer graça, estou pulando conceitos e funções só pra fazer uma array e structures.
Struct é o comando que define uma estrutura, que mantem o padrão ao longo do código com as mesmas variáveis definidas.
Ao chamar a struct com strcpy, todos os campos precisam ser preenchidos.*/

struct aluno {
    char nome[50];
    int idade;
    float n1,n2;
};

int main(void) {
    struct aluno alunos[3]; // Array de 3 alunos

    strcpy(alunos[0].nome, "Jonelson");
    alunos[0].n1 = 9.5;
    alunos[0].n2 = 8.3;
    alunos[0].idade = 18;

    strcpy(alunos[1].nome, "Maria");
    alunos[1].n1 = 10;
    alunos[1].n2 = 7.9;
    alunos[1].idade = 19;

    strcpy(alunos[2].nome, "Pedro");
    alunos[2].n1 = 8.1;
    alunos[2].n2 = 6.7;
    alunos[2].idade = 20;
//De for eu já manjo, só precisei usar com C.
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\nNota 1: %.1f\nNota 2: %.1f\nIdade: %d\n\n",
               alunos[i].nome, alunos[i].n1, alunos[i].n2, alunos[i].idade);
    }

    return 0;
}
