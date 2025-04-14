#include <stdio.h>

#ifndef MAX_LENGTH
#define MAX_LENGTH 3
#endif
struct Aluno{
    char nome[50];
    int idade;
    float nota;
};

int main(){
    //uso básico do struct
    struct Aluno aluno01 = {"Carlos", 18, 8.5};
    printf("Aluno: %s\n", aluno01.nome);
    printf("Aluno: %d\n", aluno01.idade);
    printf("Aluno: %.2f\n\n", aluno01.nota);

    //usando arrays
    struct Aluno turma[MAX_LENGTH] = {
        {"Alice", 18, 9.8},
        {"Macabeth", 22, 10.0},
        {"Kratos", 30, 7.5}
    };

    for (int i = 0; i < MAX_LENGTH; i++){
        printf("Aluno %d: nome - %s, idade - %d, nota - %.2f;\n", i+1, turma[i].nome, turma[i].idade, turma[i].nota);
    }
    return 0;
}