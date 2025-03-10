#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    return 0;
}

/* 
Questões da atividade do Classroom. Segue as respotas:    
01:
As etapas da compilação são separadas em quatro, sendo, respectivamente, Pré-processamento, compilação, montagem e ligação.
    A etapa de Pré-processamento é responsável por analisar o código-fonte lexicalmente e traduzir para linguagem de máquina, retirando espaçamentos desnecessárioas e gerando uma Unidade de Compilação.
    A etapa de Compilação propõe analisar o arquivo gerado anteriormente, e, se não houver erro, gera um arquivo assembler. 
    A etapa de Montagem traduz o código assembler gerado na etapa anterior, gerando o código-objeto (o código-objeto é o código gerado na linguagem de máquina da arquitetura-alvo), mas não é executado pela ausência das referências e funções.
    A etapa de Ligação é para resolver a pendência da etapa anterior. Aqui, ela vai fazer as referências de outros código-ojeto e gerar um arquivo executável.
 
02:
a) gcc prog.c -o prog = Compila um programa que está no código-fonte "prog.c" e gera um executável "prog.exe".
b) gcc prog.c = Compila um programa que está no código "prog.c" e gera um executável "a.exe".
c) gcc prog.c -o aux.c entsai.c = Acredito que há um erro nesse código fornecido, pois o "-o" é usado para designar o nome de um arquivo, e no código após usar "-o" ele referencia outra arquivo com extensão em C, acredito que o correto seria: "gcc prog.c aut.x entsai.c -o _nomedoarquivo", nesse caso ele compilaria os três arquivos em C e gerar um executável com o nome desejável.
d) gcc progA.c progB.o = Compila o arquivo "progA.c" e faz uma ligação com "progB.o", ele não vai compilar o segundo arquivo pois já está compilado e encontra-se em formato de código-objeto.
 
03:
Existem duas formas de comentar na escrita em C, sendo por linha ou bloco.
Por linha utiliza-se "//", que pode ser referenciada no inicío da linha, como também posterior ao início dela.
Exemplo:
if (strcmp(escolha_, "papel") == 0) //Esse é um exemplo de comentário de linha depois do início dela.
	{
		//esse é o exemplo de comentário no início da linha.
		escolha_number = 0;
	}

Por bloco, ele vai utilizar /* _comentário_*/
/* 
Este é um exemplo de como o comentário abrange várias linhas.
Aqui você pode especficiar e até descrever um código completo.
Funcionando como uma forma de descrição do código.
E facilitando a compreensão dos programadores.
*/

 
/* 04: */
#include <stdio.h>
int questao04 (void) {
printf ("Inicio do programa\nFim");
return 0;
}

/* 05: */
#include <stdio.h>
int questao05 (void) {
int n;
printf ("Escreva um numero inteiro qualquer: ");
scanf("%d", &n);
printf("%d", n);
return 0;
}

/* 06: */
#include <stdio.h>
int questao06 (void) {
int n;
printf ("Escreva um numero inteiro qualquer: ");
scanf("%d", &n);
printf("O valor lido: %d", n);
return 0;
}

/* 07: */
#include <stdio.h>
int questao07 (void) {
int n;
printf ("Escreva um numero inteiro qualquer: ");
scanf("%d", &n);
printf("O valor lido: %d\nO seu antecessor: %d\nO seu sucessor: %d", n, n-1, n+1);
return 0;
}

/* 08: */
#include <stdio.h>
int questao08 (void) {
int n01,n02,n03;
printf ("Escreva um numero inteiro qualquer: ");
scanf("%d", &n01);
printf ("Escreva outro numero inteiro qualquer: ");
scanf("%d", &n02);
printf ("Escreva outro numero inteiro qualquer: ");
scanf("%d", &n03);
printf("O valor da soma dos numeros: %d", n01+n02+n03);
return 0;
}

/* 09: */
#include <stdio.h>
int questao09 (void) {
float n01,n02,n03,n04;
printf ("Escreva um numero real qualquer: ");
scanf("%f", &n01);
printf ("Escreva outro numero real qualquer: ");
scanf("%f", &n02);
printf ("Escreva outro numero real qualquer: ");
scanf("%f", &n03);
printf ("Escreva o ultimo numero real qualquer: ");
scanf("%f", &n04);
printf("O valor da media aritimetica dos numeros: %f", (n01+n02+n03+n04)/4);
return 0;
}

/* 10: */
#include<stdio.h>
int questao10 (void) {
    float C, F;
    printf("Digite o valor da temperatura em graus Celsius: ");
    scanf("%f", &C);
    printf("O valor da temperatura em Fahrenheit: %f", (C*9 + 32*5)/5);
    return 0;   
}

/* 11: */
#include<stdio.h>
int questao11 (void) {
    int quantia = 780000;
    printf("Valor para o primeiro ganhador: %d\nValor para o segundo ganhador: %d\nO valor para o terceiro ganhador: %d", (quantia*46)/100, (quantia*32)/100, (quantia*22)/100);
    return 0;   
}

/* 12: */
#include<stdio.h>
int questao12 (void) {
    float R, pi = 3.141592;
    printf ("Digite o valor do raio de um circulo: ");
    scanf("%f", &R);
    printf("A area do seu circulo: %f", (R*R) * pi);
    return 0;   
}

/* 13: */
#include<stdio.h>
#include<math.h>
int questao13 (void) {
    float a, b;
    printf ("Digite o valor do primeiro cateto do triangulo: ");
    scanf("%f", &a);
    printf ("Digite o valor do segundo cateto do triangulo: ");
    scanf("%f", &b);
    printf("O valor da hipotenusa: %f", sqrt(a*a + b*b));
    return 0;   
}

/* 14: */
#include<stdio.h>
int questao14 (void) {
    float a, b;
    printf ("Digite o valor de um numero qualquer: ");
    scanf("%f", &a);
    printf ("Digite o valor de outro numero qualquer: ");
    scanf("%f", &b);
    
    if (a > b) {
        printf("O maior numero: %f", a);
    }
    else {
        if (a < b) {
            printf("O maior numero: %f", b);
        }

        else {
            printf("Numeros iguais.");
        }
    }
    return 0;   
}

/* 15: */
#include<stdio.h>
int questao15 (void) {
    int a;
    printf("Digite o valor de um numero inteiro qualquer: ");
    scanf ("%d", &a);
    if (a%2 == 0) {
        printf("Seu numero eh par.");
    }
    else {
        printf("Seu numero eh impar.");
    }
    return 0;
}

/* 16: */
#include<stdio.h>
int questao16 (void) {
    float salario, emprestimo;
    int vezes;
    printf("Bem vindo ao setor de emprestimo, qual o valor do emprestimo que o senhor deseja realizar? ");
    scanf("%f", &emprestimo);
    printf("Em quantas vezes o senhor deseja parcelar o emprestimo? ");
    scanf("%d", &vezes);
    printf("Otimo, agora informe o valor do seu salario atual: ");
    scanf("%f", &salario);

    if ((emprestimo/vezes) > (salario*0.2)) {
        printf("Emprestimo nao concedido.");
    }
    else {
        printf("Emprestimo concedido.");
    }
    return 0;   
}

/* 17:  */
#include<stdio.h>
#include<math.h>
int questao17 (void) {
    int a, b, c, delta, r1, r2;
    printf("Vamos calcular as raizes de uma equacao do segundo grau, digite o valor do coeficiente a: ");
    scanf("%d", &a);
    printf("Agora digite o valor do coeficiente b: ");
    scanf("%d", &b);
    printf("Por fim, digite o valor do coeficiente c: ");
    scanf("%d", &c);

    delta = (b*b) - 4*a*c;
    if (delta < 0) {
        printf("Nao existe raiz real.");
    }
    else {
        if (delta == 0) {
            r1 = (-b + sqrt(delta))/2*a;
            printf ("As raizes sao iguais: %d", r1);
        }
        else {
            r1 = (-b + sqrt(delta))/2*a;
            r2 = (-b - sqrt(delta))/2*a;
            printf ("Tem duas raizes: %d, %d", r1, r2);
        }
    }
    return 0;   
}

/* 18:
a) printf("O valor  ́e %d", &numero);
    Resposta: Não precisa do "&", ficando -> printf("O valor  ́e %d", numero);
b) scanf("%d%d", &numero1, numero2);
    Resposta: Precisa do "&", ficando -> scanf("%d%d", &numero1, &numero2);
c) printf("A soma  ́e %d \n,"x+y);
    Resposta: A virgula não foi posicionada adequadamente. Ficando -> printf("A soma  ́e %d \n", x+y);
d) scanf("d", valor);
    Resposta: Falta o "&" na variavel, ficando -> scanf("d", &valor);
 */

/* 19:
Existem três printf, sendo:
1°printf (linha 06): Retorna 4 e 5.7
2°printf (linha 09): Retorna 3 e 6
3°printf (linha 12): Retorna 2 e 9
4°printf (linha 13): Retorna 3 e 6
 */

/* 
20:
Se o usuário digitar o número "6" o programa retorna "num. positivo" e se o usuário digitar "-6" retorna "num. menor que 10".
 */