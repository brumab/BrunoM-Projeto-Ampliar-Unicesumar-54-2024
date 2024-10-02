#include <stdio.h>

int main() {

    int anoAtual;
    int anoNascimento;
    int idade;

    anoAtual = 2024;
    anoNascimento = 1986;
    idade = anoAtual - anoNascimento;

    printf("O monitor Bruno tem %d anos", idade);

    return 0;
}