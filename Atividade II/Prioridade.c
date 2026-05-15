#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

Pessoa prioridade[MAX], normal[MAX];
int p = 0, n = 0;

int main() {
    Pessoa pessoa;

    // entrada fixa
    strcpy(pessoa.nome, "A"); pessoa.idade = 30;
    if (pessoa.idade > 65) prioridade[p++] = pessoa;
    else normal[n++] = pessoa;

    strcpy(pessoa.nome, "B"); pessoa.idade = 70;
    if (pessoa.idade > 65) prioridade[p++] = pessoa;
    else normal[n++] = pessoa;

    strcpy(pessoa.nome, "C"); pessoa.idade = 40;
    if (pessoa.idade > 65) prioridade[p++] = pessoa;
    else normal[n++] = pessoa;

    strcpy(pessoa.nome, "D"); pessoa.idade = 80;
    if (pessoa.idade > 65) prioridade[p++] = pessoa;
    else normal[n++] = pessoa;

    strcpy(pessoa.nome, "E"); pessoa.idade = 20;
    if (pessoa.idade > 65) prioridade[p++] = pessoa;
    else normal[n++] = pessoa;

    // atendimento
    printf("Atendimento:\n");

    for (int i = 0; i < p; i++)
        printf("Prioritario: %s\n", prioridade[i].nome);

    for (int i = 0; i < n; i++)
        printf("Normal: %s\n", normal[i].nome);

    return 0;
}
