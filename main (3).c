/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("inserire tre numeri\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    if (n1-n2==n2-n3)
    {
        printf("numeri in progressione aritmetica\n");
    }
else 
{
    printf("numeri non in progressione aritmetica\n");
}
    return 0;
}
