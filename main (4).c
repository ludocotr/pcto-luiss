/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    printf("inserire tre numeri\n");
    scanf("%d%d%d",&numero1,&numero2,&numero3);
    
    if(numero1+numero2>numero3 && numero2+numero3>numero1 && numero3+numero1>numero2)
    {
        printf("i numeri possono essere le lunghezze dei tre lati di un triangolo\n");
    }
    else
    printf("i numeri non possono essere le lunghezze dei tre lati di un triangolo\n");

    return 0;
}
