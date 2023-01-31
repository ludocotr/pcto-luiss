/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int lato1;
    int lato2;
    int lato3;
    printf("inserire tre lati\n");
    scanf("%d%d%d",&lato1,&lato2,&lato3);

    if(lato2==lato3 && lato1==lato2 && lato3==lato1)
    printf("il triangolo è equilatero\n");
    else if(lato1!=lato2 && lato2!=lato3 && lato3!=lato1)
    printf("il triangolo è scaleno\n");
    else 
    printf("il triangolo è isoscele\n");
 
 return 0;
}
