#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
int i;
float soma = 0, a[10];
float media;
// valores
printf ( "Digite as notas: \n");
for ( i = 0; i < 10; i++ ) {
scanf ( "%f", &a[i] );
}
// exibe valores
for ( i = 0; i < 10; i++ )
soma += a[i];
printf ( "\nSoma total: %.2f\n", soma );
// calcula e mostra media
media = soma / 10;
printf ( "\n\t>>>Media Geral : %.2f\n", media );

system ("pause");

return 0;
}
