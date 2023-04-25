#include <stdio.h>

int main (void) {

int reinaldo1;
int lucas;
int resultado;

printf ("Qual seu número da sorte lucas?");
scanf ("%d",&lucas);

printf ("Lucas, escolha um número: ");
scanf ("%d", &reinaldo1);

resultado = lucas * reinaldo1;

printf ("Seu número que simbolizada nada é: %d ", resultado );
return 0;
}