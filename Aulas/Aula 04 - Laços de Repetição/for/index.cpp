/*
&& -> e 
|| -> ou 
== -> = 
!= -> <>
>=
<=
*/

// for - para

// for ( i = 0; i < count; i++)
// {
//     commands;
// }

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

main() {

int x;

// Estrutura do for
for ( x = 0; x <= 10; x++) {
    printf("%d \n", x);
}
printf("%d \n", x);

// Usando duas condições de validação
for ( x = 0; (x <=10 && x >= 0); x++) {
    printf("%d \n", x);
}
printf("%d \n", x);

// Incrementando de 2 em 2
for ( int y = 2; y <= 10; y=y+2) {
    
    printf("Alison \n");
}

system("pause");

}
