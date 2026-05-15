#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct {
    char nome[50];
    int tempo;
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
    int total = 0, count = 0;

    // Inserindo dados (tempo exemplo)
    p.tempo = 5; enqueue(p);
    p.tempo = 10; enqueue(p);
    p.tempo = 7; enqueue(p);
    p.tempo = 12; enqueue(p);
    p.tempo = 6; enqueue(p);

    while (front < rear) {
        Pessoa aux = dequeue();
        total += aux.tempo;
        count++;
    }

    float media = (float) total / count;

    printf("Media: %.2f\n", media);

    if (media > 8)
        printf("Abrir novo caixa\n");
    else
        printf("Nao precisa abrir novo caixa\n");

    return 0;
}
