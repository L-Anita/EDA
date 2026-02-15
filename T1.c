/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Ingresar un numero: ");
    scanf("%d", &num);
    
        if((num & (num - 1)) == 0){
        /*Los bits de una potencia de 2 siempre es llevan uno y se va recorriendo
        a la izquierda conforme avanzan, entonces al compararlo con un numero anterior 
        a este en la operancion AND siempre va a dar 0
        Ej. 8 = 1000, 7 = 0111  7&8 = 0,
        en cambio con uno que no es potencia de 2 dará otro número*/
            printf("%d es potencia de 2\n", num);
        }
        else{
            printf("%d no es potencia de 2\n", num);
        }

    
    return 0;
}