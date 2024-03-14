#define exercicio6
#include <stdio.h>
#include <stdlib.h>

#ifdef exercicio6
/* 6. Leia dois números inteiros e mostre o maior deles. Caso sejam iguais informe ao usuário.*/
main()
{
int num1, num2;

printf ("Digite um numero inteiro: \n");
scanf ("%d", &num1);

printf ("Digite mais um numero inteiro: \n");
scanf ("%d", &num2);

if (num1 == num2) //se o número 1 for igual ao número 2
{
    printf ("\n O numero %d e' igual ao numero %d \n", num1, num2);
}
else if(num1 > num2)// se o número 1 for maior que o número 2
{
    printf ("\n O numero %d e' maior que %d \n", num1, num2);
}
else //se não, o número 1 é menor do que o número 2 {
    printf ("\n O numero: %d e' maior do que o numero: %d \n", num2, num1);
}
#endif
