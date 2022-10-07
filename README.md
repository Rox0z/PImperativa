# PImperativa
---
### Atividades práticas de programação imperativa

- [x] - P1
- [x] - P2 (Sem documentação)

### Compilar todos os trabalhos de uma vez

Dentro da Pasta P1 há um arquivo makefile que serve para executar uma série de comandos, e ele está configurado para compilar todos os arquivos .c da pasta sources para a pasta comps.
Para executar você deverá estar dentro da pasta P1 no terminal e digitar `make` para que o comando compile todos os trabalhos.
# Resumo de C

```c

#include <stdio.h>  
// Include (#include <nome_da_biblioteca.h>) é um comando de importar uma biblioteca (conjunto de funções prontas) ao código, e stdio.h é o nome da biblioteca padrão (std = standart) de entrada e saida (io = in-out) que inclui como por exemplo as funções de scanf (receber um valor do usuário) e printf (escrever um valor dado) no terminal

int funcao(int num1, int num2) 
{ 
    // Isso é uma função sua sintaxe é composta por:
    // tipo nome_da_funcao(tipo nome_do_parametro) { return valor }
    // o tipo que é declarado antes do nome da função diz o que a função deve retornar, no exemplo o tipo é "int" de inteiro, ou seja ele deve retornar valores apenas valores inteiros ex.: -2, 0, 4 .
    // o nome da função pode ser da forma que você desejar (porém a algumas regras, as principais sendo que o nome não pode começar com numeros e não pode conter pontuações).
    // os parâmetros (também chamados de argumentos) são os valores que você declara que a função precisa para seu funcionamento, eles são opcionais (você não precisa declarar eles caso a função não precise) e seus nomes são apenas locais, ou seja são independentes do resto do código fora da função, e a quantidade de argumentos vão de acordo com sua necessidade.

    // return é o comando de retornar um valor, ele deve retornar apenas o tipo do valor que foi declarado na função (aquele antes do nome da função), no nosso exemplo nossa função deve retornar um valor int, e já que nossos argumentos são de valor int, quando fazemos a operação de soma (+) o resultado será um int que vai ser retornado
    return num1 + num2;
}

char* condicaoif(int x) // Aqui como queremos que a função nos retorne uma palavra seu tipo de retorno será char* (char = 1 digito de letra, char* = vários digitos de letra)
{
    // Vamos fazer uma função de condição agora, onde x é um valor numérico caso x for 0 (falso) ele deverá devolver a palavra maçã, caso qualquer outro número (verdadeiro) a palavra banana
    if (x) { //se x for verdadeiro (qualquer número além de 0)
        return "banana"; // retorne banana
    } else { // senaão
        return "maçã"; // retorne maçã
    }
}

char* condicaoternaria(int x) // também há outra forma de fazer uma condição, que é usando a sintaxe ternária ( condição ? então : senão) antes do ? vem nossa pergunta que deverá retornar um valor que é verdadeiro ou falso, se a condição for verdadeira, ele irá retornar o valor antes dos :, se a condição não for verdadeira, ele irá retornar o valor depois dos :
{ // exemplo
    return x ? "maçã" : "banana"; // nesse caso vamos fazer o inverso da condicaoif, caso for verdadeiro deverá devolver a maçã senão devolverá banana
}

int main(void) 
{
    // A função main é essencial e obrigatória em codigos em C, seu valor de retorno sempre deverá ser int, e sempre deverá retornar um valor, esses valores são como se fosse o status da função, sendo 0 significando que tudo ocorreu corretamente no nosso código.

    printf("%d\n", funcao(2,3)); //printf (print formatado), é uma função importada pela biblioteca padrão de entrada e saída, que mostra no terminal um valor formatado, seu primeiro parâmetro é um texto que possui placeholders (simbolos que vão ser substituidos contendo informação de como vão ser substituidos) e o valor que vai substituir o placeholder, e no nosso exemplo ele vai imprimir um valor numérico (%d = número decimal inteiro) e esse placeholder %d vai ser substituido pelo valor que a função retorna, no caso a soma de 2 e 3
    printf("%s\n",condicaoif(0));
    printf("%s\n",condicaoternaria(0));
    return 0;
}
```
