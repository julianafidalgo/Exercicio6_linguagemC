#define exercicio6
#include <stdio.h>
#include <stdlib.h>

#ifdef exercicio6
/* 6. Leia dois n�meros inteiros e mostre o maior deles. Caso sejam iguais informe ao usu�rio.*/
main()
{
int num1, num2;

printf ("Digite um numero inteiro: \n");
scanf ("%d", &num1);

printf ("Digite mais um numero inteiro: \n");
scanf ("%d", &num2);

if (num1 == num2) //se o n�mero 1 for igual ao n�mero 2
{
    printf ("\n O numero %d e' igual ao numero %d \n", num1, num2);
}
else if(num1 > num2)// se o n�mero 1 for maior que o n�mero 2
{
    printf ("\n O numero %d e' maior que %d \n", num1, num2);
}
else //se n�o, o n�mero 1 � menor do que o n�mero 2 {
    printf ("\n O numero: %d e' maior do que o numero: %d \n", num2, num1);
}
#endif
