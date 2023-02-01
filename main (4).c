/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void fattoriale (int n){}
int main();

{
    int N;
    int tot=1;
    
    printf("prendi un numero %d\n", N);
    scanf("%d", &N);
    
    while(N>=1) {
        tot=tot*N;
        N=N-1;
    }
    {
        printf("finale %d\n", tot)
    }
    return 0;
}
