/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

6 - Faça um algoritmo usando o comando while para Contar quantos múltiplos de 3 existem entre 1 e 50

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int i = 3;
    while (i <= 50) { 
        if (i%3==0) {
            printf("%d\n", i);
        } 
        i++;
        
        
    }

    return 0;
}
