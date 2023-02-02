/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    i=0;
    char str[]="ciao";
    
    while(str[i]!='\0')
    {
        i=i+1;
    }
printf("stampare la i di str %d\n",i);
    
    return 0;
}