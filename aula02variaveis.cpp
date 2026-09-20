#include <iostream>
using namespace std;

int main(){

    // Para declarar variáveis, devemos indicar o tipo, nome da variável e o valor padrão. 
    int idade = 25; // Variável do tipo inteiro
    char letra = 'A'; // Variável do tipo caractere
    float altura = 1.75; // Variável do tipo ponto flutuante
    double peso = 70.5; // Variável do tipo ponto flutuante de maior precisão
    bool estudante = true; // Variável do tipo booleano
    char nome[20] = "João"; // Variável do tipo string (array de caracteres)
    string cidade = "São Paulo"; // Variável do tipo string (C++11 ou superior)

    cout << "Idade: " << idade << endl;
    cout << "Letra: " << letra << endl;
    cout << "Altura: " << altura << endl;
    cout << "Peso: " << peso << endl;
    cout << "Estudante: " << (estudante ? "Sim" : "Não") << endl;
    cout << "Nome: " << nome << endl;
    cout << "Cidade: " << cidade << endl;

    return 0;
}