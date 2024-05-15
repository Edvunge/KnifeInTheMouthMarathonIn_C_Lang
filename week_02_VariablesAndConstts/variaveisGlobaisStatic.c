#include <stdio.h>

/*
VARIAVEIS GLOBAIS STATIC

Aplicar o especificador static a uma variavel global informa ao computador para criar uma variavel global
que é reconhecida apenas no arquivo no qual a mesma foi declrada.

*/

static int series_num;
void series_start(int seed);
int sereies(void);

series(void) {
    series_num = series_num+23;
    return series_num;
}

// inicializa series_num
void series_start(int seed) {
    series_num = seed;
}


