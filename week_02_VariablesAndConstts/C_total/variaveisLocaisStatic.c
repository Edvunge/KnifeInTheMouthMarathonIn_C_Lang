#include <stdio.h>
/*
VARIAVEIS LOCAIS STATIC

Quando o modificador static é aplicado a uma variavel local, o compilador cria armazenamento 
permanente para ela quase da mesma forma como cria armazenamento para uma variavel global. 
*/

series(void) {
    static int series_num;

    series_num = series_num+23;
    return (series_num);
}