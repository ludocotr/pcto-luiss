/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int num1, x;
int i=1;

printf("Inserisci un numero da verificare\n");
scanf("%d",&num1);
if(num1>1)
{
    do
    {
        i++;
        x=num1%i;
    }
    while(x);
}
if(i==num1)
{
    printf("è un numero primo");
}
else
{
    printf("non è un numero primo");
}
return 0;
}
