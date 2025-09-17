/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

 ------ Faça um algoritmo usando o comando while para Somar os números de 1 a 10 -------
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int i = 1;
    int soma = 0;
    while (i <= 10) { // acumula o valor
        soma = soma + i; // soma será numero + numero 
        i++; //passa para o proximo numero 
        printf("%d\n", soma);
        
    }

    return 0;
}
