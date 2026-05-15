#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct {
    char nome[50];
    char cpf[15];
    char nascimento[15];
    char motivo[10]; // Reclamar ou Elogiar
} Pessoa;

Pessoa fila[MAX];
int front = 0, rear = 0;

void enqueue(Pessoa p) {
    fila[rear++] = p;
}

Pessoa dequeue() {
    return fila[front++];
}

int main() {
    Pessoa p;

    // Inserindo 5 pessoas
    strcpy(p.nome, "Ana"); strcpy(p.motivo, "Reclamar"); enqueue(p);
    strcpy(p.nome, "Joao"); strcpy(p.motivo, "Elogiar"); enqueue(p);
    strcpy(p.nome, "Maria"); strcpy(p.motivo, "Reclamar"); enqueue(p);
    strcpy(p.nome, "Carlos"); strcpy(p.motivo, "Elogiar"); enqueue(p);
    strcpy(p.nome, "Luana"); strcpy(p.motivo, "Reclamar"); enqueue(p);

    int reclamar = 0, elogiar = 0;

    while (front < rear) {
        Pessoa aux = dequeue();
        if (strcmp(aux.motivo, "Reclamar") == 0)
            reclamar++;
        else
            elogiar++;
    }

    printf("Reclamar: %d | Elogiar: %d\n", reclamar, elogiar);

    return 0;
}
