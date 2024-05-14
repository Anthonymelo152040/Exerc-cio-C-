#include <iostream>

// Função para somar dois números inteiros
int soma(int a, int b) {
    return a + b;
}

int main() {
    // Definindo dois números inteiros
    int num1 = 10;
    int num2 = 20;

    // Chamando a função de soma e armazenando o resultado
    int resultado = soma(num1, num2);

    // Exibindo o resultado
    std::cout << "A soma de " << num1 << " e " << num2 << " é " << resultado << "." << std::endl;

    return 0;
}
