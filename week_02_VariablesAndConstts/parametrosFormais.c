/*
PARAMETROS FORMAIS

Se uma função usa argumentos, ela deve declarar variaveis que receberão os valores dos argumentos. 
Essas variaveis são denominadas parametros formais da função. Elas se comportam como qualquer 
outra variavel local dentro da função. 

Como é mostrado no fragmento de programa seguinte, suas declações ocorrem depois do nome da função 
e dentro dos parenteses:  
*/

// retorna 1 se c é parte da string s; 0 se não é caso

is_in(char *s, char c) {
    while(*s)
        if(*s == c) return 1;
        else s++;

    return 0;
}