#include <stdio.h>

/*
NOMES DE VARIAVEIS

O nome que se vai atribuir a variaveis em C implica observar um numero reduzido de regras:

    O nome de uma pode ser constituido por letras do alfabeto (minisculas ou maisculas).
    digitos (0 ... 9) e ainda pelo underscore(_).

    O primeiro caractere não pode ser um digito, Terá que ser uma letra ou o caractere underscore. 
    No entanto, é desaconselhavel a utilização deste último como primeira letra identificadora de uma variavel.

    Maiusculas e minusculas representam caracteres diferesntes, logo variaveis distintas.

    Uma variavel não pode ter por nome uma palavra reservada da propria Linguagem C. 
    Assim, não podemos ter uma variavel denminada float, if ou for, uma vez que essas palavras são instruções
    ou tipos da propria linguagem. 
*/

int main() {
    int    idade;          // correto
    float  Num_Cliente;    // correto
    float  a1b2c3;         // correto
    float  7a2b3c;         // incorreto: primeiro caractere é um digito
    char   float;          // incorreto: utilizou-se uma palavra reservada
    double vinte%;         // incorreto: utilizou-se caractere inadimissivel
    char   sim?nao;        // incorreto: utilizou-se caractere inadimissivel
    int    _alfa;          // correto, mas não aconselhavel
    int    _123;           // correto, mas não aconselhavel


}