#include <stdio.h>
#include <stdlib.h>
#define t 2

typedef char STRING[1000];

typedef struct{
    int dia;
    int mes;
    int ano;
}DATA;

struct matricula{
    STRING nome;
    STRING cargo;
    DATA data;
    int quantidadeDependentes;
    float salario;
};

int main(){

    int i, a, b, c;
    float media = 0;
    struct matricula Matricula[t];
    int Case;

    cadastrar:

    for(int i = 0; i < t; i++){

        printf("\nEntre com seu nome: ");
        scanf("\n%[^\n]", Matricula[i].nome);
        printf("Entre com seu cargo: ");
        scanf("\n%[^\n]", Matricula[i].cargo);
        printf("Entre com sua data de nascimento:\n");
        printf("Dia: ");scanf("%i", &Matricula[i].data.dia);
        printf("Mes: ");scanf("%i", &Matricula[i].data.mes);
        printf("Ano: ");scanf("%i", &Matricula[i].data.ano);
        printf("Entre com a quantidade de dependentes: ");
        scanf("%i", &Matricula[i].quantidadeDependentes);
        printf("Entre com seu salario: ");
        scanf("%f", &Matricula[i].salario);
    }

    printf("O que quer fazer: 1(Mostrar nome e cargo) 2(Media do salario) 0(Sair)\n");
    scanf("%i", &Case);

    switch(Case){
    case 1:
        for(b = 0; b < t; b++){
            if(Matricula[b].quantidadeDependentes > 2){
                printf("\nNomes: %s", Matricula[b].nome);
                printf("\nCargos: %s\n", Matricula[b].cargo);
            }
        }
        goto cadastrar;
        break;

    case 2:
        for(a = 0; a < t; a++){
            media = media + Matricula[a].salario;
        }
        printf("%0.2f", media/a);
        goto cadastrar;
        break;

    case 0:

        break;


    }
}
