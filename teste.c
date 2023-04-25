#include <stdio.h>

int main (void) {

int reinaldo;
int lucas;
int resultado;

printf ("Qual seu número da sorte lucas?");
scanf ("%d",&lucas);

printf ("Lucas, escolha um número: ");
scanf ("%d", &reinaldo);

resultado = lucas * reinaldo;

printf ("Seu número que simbolizada nada é: %d ", resultado );
return 0;
}